#include "../headers/server.h"

Server::Server()
{
    socketHandler_.openSocket();
    socketHandler_.bind(SERVER_PORT);
    socketHandler_.connect(CLIENT_PORT, "127.0.0.1");
}

void Server::listen()
{
    std::vector<uint8_t> request_buffer(26,0);

    socketHandler_.recv(request_buffer);

    request_ = UdpPacket::decode(request_buffer);

    Utils::displayInfo(request_, "ON SERVER REQUEST");

    Server::reply();
}

void Server::reply()
{
    response_ = request_.operator*();
    response_.setType(0);
    response_.setPayload("Hello from server!");

    auto reply_buffer = response_.encode();

    sleep(1);

    socketHandler_.send(reply_buffer);
}