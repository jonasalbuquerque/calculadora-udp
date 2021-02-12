#include "../headers/UdpPacket.h"

#include <utility>

UdpPacket::UdpPacket() = default;

UdpPacket::UdpPacket(uint16_t p_srcPort,
                     uint16_t p_destPort,
                     uint16_t p_length,
                     uint16_t p_checksum,
                     std::string p_payload) :
        srcPort_{p_srcPort},
        destPort_{p_destPort},
        length_{p_length},
        checksum_{p_checksum},
        payload_{std::move(p_payload)}
{
}

std::shared_ptr<std::vector<uint8_t>> UdpPacket::encode()
{
    std::shared_ptr<std::vector<uint8_t>> pckt = std::make_shared<std::vector<uint8_t>>();
    pckt->push_back(static_cast<uint8_t> (srcPort_ >> 8)); //source port first byte
    pckt->push_back(static_cast<uint8_t> (srcPort_ & 0xFF)); //source port second byte
    pckt->push_back(static_cast<uint8_t> (destPort_ >> 8)); //destination port first byte
    pckt->push_back(static_cast<uint8_t> (destPort_ & 0xFF)); //destination port second byte
    pckt->push_back(static_cast<uint8_t> (length_ >> 8)); //length first byte
    pckt->push_back(static_cast<uint8_t> (length_ & 0xFF)); //length second byte
    pckt->push_back(static_cast<uint8_t> (checksum_ >> 8)); //checksum first byte
    pckt->push_back(static_cast<uint8_t> (checksum_ & 0xFF)); //checksum second byte

    for (const auto& c : payload_)
    {
        pckt->push_back(static_cast<uint8_t> (c));
    }
    return pckt;
}
std::shared_ptr<UdpPacket> UdpPacket::decode(const std::shared_ptr<std::vector<uint8_t>> &inputPacket)
{
    std::shared_ptr<UdpPacket> pckt = std::make_shared<UdpPacket>();
    pckt->setSrcPort((inputPacket->at(0) << 8) + inputPacket->at(1));
    pckt->setDestPort((inputPacket->at(2) << 8) + inputPacket->at(3));
    pckt->setLength((inputPacket->at(4) << 8) + inputPacket->at(5));
    pckt->setChecksum((inputPacket->at(6) << 8) + inputPacket->at(7));

    std::string payload_msg;
    for (auto i = inputPacket->begin()+8; i != inputPacket->end(); ++i){
        payload_msg.push_back(*i);
    }
    pckt->setPayload(payload_msg);
    return pckt;
}

uint16_t UdpPacket::getSrcPort() const             {return srcPort_;}
uint16_t UdpPacket::getDestPort() const            {return destPort_;}
uint16_t UdpPacket::getLength() const              {return length_;}
uint16_t UdpPacket::getChecksum() const            {return checksum_;}
std::string UdpPacket::getPayload() const          {return payload_;}

void UdpPacket::setSrcPort(const uint16_t &newSrcPort)               { srcPort_ = newSrcPort; }
void UdpPacket::setDestPort(const uint16_t &newDestPort)             { destPort_ = newDestPort; }
void UdpPacket::setLength(const uint16_t &newLength)                 { length_ = newLength; }
void UdpPacket::setChecksum(const uint16_t &newChecksum)             { checksum_ = newChecksum; }
void UdpPacket::setPayload(const std::string &newPayload)            { payload_ = newPayload; }

uint16_t UdpPacket::computeChecksum(std::shared_ptr<UdpPacket> packet)
{
    uint32_t sum = packet->getSrcPort() +
                   packet->getDestPort() +
                   packet->getLength();

    for (const auto& c : packet->getPayload())
    {
        sum += static_cast<uint8_t> (c << 8);
        sum += static_cast<uint8_t> (c);
    }

    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += (sum >> 16);
    return static_cast<uint16_t>(~sum);
}

