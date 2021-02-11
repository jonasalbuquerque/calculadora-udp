#ifndef CALCULADORAUDP_UDPPACKET_H
#define CALCULADORAUDP_UDPPACKET_H

// The wire format of an UDP header is:
//
// 0               8               16                             31
// +---------------+---------------+------------------------------+      ---
// |                               |                              |       ^
// |          source port          |       destination port       |       |
// |                               |                              |       |
// +---------------+---------------+------------------------------+    8 bytes
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
    uint8_t type_{};
    uint8_t code_{};
    uint16_t checksum_{};
    uint16_t identifier_{};
    uint16_t sequenceNumber_{};
    std::string payload_;

public:
    UdpPacket();
    UdpPacket(uint8_t p_type,
              uint8_t p_code,
              uint16_t p_checksum,
              uint16_t p_identifier,
              uint16_t p_sequenceNumber,
              std::string p_payload
    );
    std::vector<uint8_t> encode();
    static std::shared_ptr<UdpPacket> decode(const std::vector<uint8_t> &inputPacket);

    uint8_t getType() const;
    uint8_t getCode() const;
    uint16_t getChecksum() const;
    uint16_t getIdentifier() const;
    uint16_t getSequenceNumber() const;
    std::string getPayload() const;

    void setType(const uint8_t &newType);
    void setCode(const uint8_t &newCode);
    void setChecksum(const uint16_t &newChecksum);
    void setIdentifier(const uint16_t &newIdentifier);
    void setSequenceNumber(const uint16_t &newSequenceNumber);
    void setPayload(const std::string &newPayload);

    static uint16_t computeChecksum(UdpPacket &packet);
};


#endif //CALCULADORAUDP_UDPPACKET_H
