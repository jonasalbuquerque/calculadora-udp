#include <utils.h>

void Utils::displayInfo(std::shared_ptr <UdpPacket> packet, std::string extra_msg)
{
    std::cout   << extra_msg
                << " srcport="      << packet->getSrcPort()
                << " destport="     << packet->getDestPort()
                << " length="       << packet->getLength()
                << " checksum="     << packet->getChecksum()
                << " payload=\""    << packet->getPayload()  << "\""
                << std::endl;
}