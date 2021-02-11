//
// Created by jonasalbuquerque on 09/02/2021.
//

#ifndef CALCULADORAUDP_SERVER_H
#define CALCULADORAUDP_SERVER_H

#include "UdpPacket.h"
#include "sockethandler.h"
#include "utils.h"

class Server {
public:
    Server();
    void listen();
    void reply();
private:
    SocketHandler socketHandler_;
    std::shared_ptr<UdpPacket> request_;
    UdpPacket response_;
};

#endif //CALCULADORAUDP_SERVER_H
