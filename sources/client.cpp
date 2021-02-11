#include "../headers/client.h"

Client::Client()
{
    socketHandler_.openSocket();
    socketHandler_.bind(CLIENT_PORT);
    socketHandler_.connect(SERVER_PORT, "127.0.0.1");
}

void Client::send()
{
    request_ = UdpPacket(8,
                             0,
                             0,
                             getpid(),
                             1,
                             "Hello from client!");

    request_.setChecksum(UdpPacket::computeChecksum(request_));

    auto request_buffer = request_.encode();

    sleep(1);

    socketHandler_.send(request_buffer);

    Client::receive();
}

void Client::receive()
{
    std::vector<uint8_t> reply_buffer(26,0);

    socketHandler_.recv(reply_buffer);

    response_ = UdpPacket::decode(reply_buffer);

    Utils::displayInfo(response_, "ON CLIENT RESPONSE");
}