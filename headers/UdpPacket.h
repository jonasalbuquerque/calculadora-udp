#ifndef CALCULADORAUDP_UDPPACKET_H
#define CALCULADORAUDP_UDPPACKET_H

// The wire format of an UDP header is:
//
// 0                               16                             31
// +-------------------------------+------------------------------+      ---
// |                               |                              |       ^
// |          source port          |       destination port       |       |
// |                               |                              |       |
// +-------------------------------+------------------------------+    8 bytes
// |                               |                              |       |
// |            length             |          checksum            |       |
// |                               |                              |       v
// +-------------------------------+------------------------------+      ---

#include <iostream>
#include <vector>
#include <unistd.h>
#include <memory>

class UdpPacket {
private:
    uint16_t srcPort_{};
    uint16_t destPort_{};
    uint16_t length_{};
    uint16_t checksum_{};
    std::string payload_;

public:
    UdpPacket();
    UdpPacket(uint16_t p_srcPort,
              uint16_t p_destPort,
              uint16_t p_length,
              uint16_t p_checksum,
              std::string p_payload
    );
    std::shared_ptr<std::vector<uint8_t>> encode();
    static std::shared_ptr<UdpPacket> decode(const std::shared_ptr<std::vector<uint8_t>> &inputPacket);

    uint16_t getSrcPort() const;
    uint16_t getDestPort() const;
    uint16_t getLength() const;
    uint16_t getChecksum() const;
    std::string getPayload() const;

    void setSrcPort(const uint16_t &newSrcPort);
    void setDestPort(const uint16_t &newDestPort);
    void setLength(const uint16_t &newLength);
    void setChecksum(const uint16_t &newChecksum);
    void setPayload(const std::string &newPayload);

    static uint16_t computeChecksum(std::shared_ptr<UdpPacket> packet);
};


#endif //CALCULADORAUDP_UDPPACKET_H
