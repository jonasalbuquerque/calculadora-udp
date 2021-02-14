#ifndef CALCULADORAUDP_UTILS_H
#define CALCULADORAUDP_UTILS_H

#include <iostream>
#include <memory>
#include "UdpPacket.h"

class Utils {
public:
    static void displayInfo(std::shared_ptr<UdpPacket> packet, std::string extra_msg);
    static std::string recursiveParser(std::string expressionToParse);
};


#endif //CALCULADORAUDP_UTILS_H
