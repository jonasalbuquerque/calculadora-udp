#include "../headers/server.h"

Server::Server()
{
    socketHandler_.openSocket();
    socketHandler_.bind(SERVER_PORT);
    socketHandler_.connect(CLIENT_PORT, "127.0.0.1");
}

void Server::listen()
{
    std::shared_ptr<std::vector<uint8_t>> request_buffer = std::make_shared<std::vector<uint8_t>>(26,0);
    socketHandler_.recv(request_buffer);
    packet_ = UdpPacket::decode(request_buffer);
    Utils::displayInfo(packet_, "ON SERVER ECHO_REQUEST");
    Server::reply();
}

void Server::reply()
{
    packet_->setSrcPort(5000);
    packet_->setDestPort(5001);
    packet_->setPayload("Hello from server!");
    sleep(1);
    socketHandler_.send(packet_->encode());
}