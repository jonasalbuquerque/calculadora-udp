//
// Created by jonasalbuquerque on 09/02/2021.
//

#ifndef CALCULADORAUDP_SERVER_H
#define CALCULADORAUDP_SERVER_H

#include "UdpPacket.h"
#include "sockethandler.h"
#include "exprtk.hpp"
#include "utils.h"

class Server {
public:
    Server();
    void listen();
    void reply();
    void parsePayload();
private:
    SocketHandler socketHandler_;
    std::shared_ptr<UdpPacket> packet_;
};

#endif //CALCULADORAUDP_SERVER_H
