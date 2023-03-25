//
// Created by xd on 3/25/23.
//

#ifndef EASYSOCKET_EASYCLIENT_H
#define EASYSOCKET_EASYCLIENT_H

#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include "toolkit/HostTrans.h"

class EasyClient {
public:
    EasyClient(HostTransport host)
    {
        add_in = host();
    }

    in_addr_t getAddress() const
    {
        return this->add_in.sin_addr.s_addr;
    }

private:
    struct sockaddr_in add_in;
};


#endif //EASYSOCKET_EASYCLIENT_H
