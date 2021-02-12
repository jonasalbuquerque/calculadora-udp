#ifndef CALCULADORAUDP_CLIENT_H
#define CALCULADORAUDP_CLIENT_H

#include "UdpPacket.h"
#include "sockethandler.h"
#include "utils.h"

class Client {
public:
    Client();
    void send();
    void receive();
private:
    SocketHandler socketHandler_;
    std::shared_ptr<UdpPacket> packet_;
};



#endif //CALCULADORAUDP_CLIENT_H
