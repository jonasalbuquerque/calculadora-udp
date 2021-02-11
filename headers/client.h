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
    UdpPacket request_;
    std::shared_ptr<UdpPacket> response_;
};



#endif //CALCULADORAUDP_CLIENT_H
