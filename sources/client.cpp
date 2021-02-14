#include "../headers/client.h"

Client::Client()
{
    socketHandler_.openSocket();
    socketHandler_.bind(CLIENT_PORT);
    socketHandler_.connect(SERVER_PORT, "127.0.0.1");
}

void Client::send()
{
    packet_ = std::make_shared<UdpPacket> ();
    packet_->setSrcPort(CLIENT_PORT);
    packet_->setDestPort(SERVER_PORT);
    while(true)
    {
        std::string operation;
        std::cout << "Insert an operation to be calculated: ";
        getline (std::cin, operation);
        packet_->setPayload(operation);
        packet_->setLength(8 + packet_->getPayload().size());
        packet_->setChecksum(UdpPacket::computeChecksum(packet_));
        sleep(1);
        socketHandler_.send(packet_->encode());
        Client::receive();
    }
}

void Client::receive()
{
    std::shared_ptr<std::vector<uint8_t>> reply_buffer = std::make_shared<std::vector<uint8_t>>(50,0);
    socketHandler_.recv(reply_buffer);
    packet_ = UdpPacket::decode(reply_buffer);
    Utils::displayInfo(packet_, "ON CLIENT RESPONSE  ");
}