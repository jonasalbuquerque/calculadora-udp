#include "../headers/UdpPacket.h"

#include <utility>

UdpPacket::UdpPacket() = default;

UdpPacket::UdpPacket(uint8_t p_type,
                     uint8_t p_code,
                     uint16_t p_checksum,
                     uint16_t p_identifier,
                     uint16_t p_sequenceNumber,
                     std::string p_payload) :
        type_{p_type},
        code_{p_code},
        checksum_{p_checksum},
        identifier_{p_identifier},
        sequenceNumber_{p_sequenceNumber},
        payload_{std::move(p_payload)}
{
}

std::vector<uint8_t> UdpPacket::encode()
{
    std::vector<uint8_t> pckt;
    pckt.push_back(type_); //type
    pckt.push_back(code_); //code
    pckt.push_back(static_cast<uint8_t> (checksum_ >> 8)); //checksum first byte
    pckt.push_back(static_cast<uint8_t> (checksum_ & 0xFF)); //checksum second byte
    pckt.push_back(static_cast<uint8_t> (identifier_ >> 8)); //identifier first byte
    pckt.push_back(static_cast<uint8_t> (identifier_ & 0xFF)); //identifier second byte
    pckt.push_back(static_cast<uint8_t> (sequenceNumber_ >> 8)); //sequencenumber first byte
    pckt.push_back(static_cast<uint8_t> (sequenceNumber_ & 0xFF)); //sequencenumber second byte

    for (const auto& c : payload_)
    {
        pckt.push_back(static_cast<uint8_t> (c));
    }
    return pckt;
}
std::shared_ptr<UdpPacket> UdpPacket::decode(const std::vector<uint8_t> &inputData)
{
    std::shared_ptr<UdpPacket> pckt = std::make_shared<UdpPacket>();
    pckt->setType(inputData[0]);
    pckt->setCode(inputData[1]);
    pckt->setChecksum((inputData[2] << 8) + inputData[3]);
    pckt->setIdentifier((inputData[4] << 8) + inputData[5]);
    pckt->setSequenceNumber((inputData[6] << 8) + inputData[7]);

    std::string payload_msg;
    for (auto i = inputData.begin()+8; i != inputData.end(); ++i){
        payload_msg.push_back(*i);
    }
    pckt->setPayload(payload_msg);
    return pckt;
}

uint8_t UdpPacket::getType() const                 {return type_;}
uint8_t UdpPacket::getCode() const                 {return code_;}
uint16_t UdpPacket::getChecksum() const            {return checksum_;}
uint16_t UdpPacket::getIdentifier() const          {return identifier_;}
uint16_t UdpPacket::getSequenceNumber() const      {return sequenceNumber_;}
std::string UdpPacket::getPayload() const          {return payload_;}

void UdpPacket::setType(const uint8_t &newType)                      { type_ = newType; }
void UdpPacket::setCode(const uint8_t &newCode)                      { code_ = newCode; }
void UdpPacket::setChecksum(const uint16_t &newChecksum)             { checksum_ = newChecksum; }
void UdpPacket::setIdentifier(const uint16_t &newIdentifier)         { identifier_ = newIdentifier; }
void UdpPacket::setSequenceNumber(const uint16_t &newSequenceNumber) { sequenceNumber_ = newSequenceNumber; }
void UdpPacket::setPayload(const std::string &newPayload)            { payload_ = newPayload; }

/*      RFC 1071:
        To generate a checksum, the checksum field itself is cleared,
        the 16-bit 1's complement sum is computed over the octets
        concerned, and the 1's complement of this sum is placed in the
        checksum field.
*/

uint16_t UdpPacket::computeChecksum(UdpPacket& packet)
{
    uint32_t sum = (packet.getType() << 8) + packet.getCode()
                   + packet.getIdentifier() + packet.getSequenceNumber();

    for (const auto& c : packet.getPayload())
    {
        sum += static_cast<uint8_t> (c << 8);
        sum += static_cast<uint8_t> (c);
    }

    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += (sum >> 16);
    return static_cast<uint16_t>(~sum);
}
