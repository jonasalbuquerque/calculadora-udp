#include "../headers/server.h"

Server::Server()
{
    socketHandler_.openSocket();
    socketHandler_.bind(SERVER_PORT);
    socketHandler_.connect(CLIENT_PORT, "127.0.0.1");
}

void Server::listen()
{
    std::shared_ptr<std::vector<uint8_t>> request_buffer = std::make_shared<std::vector<uint8_t>>(50,0);
    socketHandler_.recv(request_buffer);
    packet_ = UdpPacket::decode(request_buffer);
    Utils::displayInfo(packet_, "ON SERVER REQUEST");
    Server::reply();
}

void Server::reply()
{
    packet_->setSrcPort(5000);
    packet_->setDestPort(5001);
    Server::parsePayload();
    packet_->setLength(8+packet_->getPayload().size());
    packet_->setChecksum(UdpPacket::computeChecksum(packet_));
    sleep(1);
    socketHandler_.send(packet_->encode());
    Server::listen();
}

void Server::parsePayload()
{
    typedef exprtk::expression<double> expression_t;
    typedef exprtk::parser<double> parser_t;
    std::string expression_string = packet_->getPayload();
    expression_t expression;
    parser_t parser;
    if (parser.compile(expression_string,expression))
    {
        double result = expression.value();
        packet_->setPayload("Result: "+std::to_string(result));
    }
    else
        throw std::invalid_argument("Error in expression");
}