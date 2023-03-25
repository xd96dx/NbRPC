//
// Created by xd on 3/25/23.
//

#ifndef EASYSOCKET_HOSTTRANS_H
#define EASYSOCKET_HOSTTRANS_H

#include <string>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <iostream>
#include "default.h"
#include "Address.h"

class HostTransport
{
public:
    HostTransport(const std::string& host)
    {
        if (inet_pton(AF_INET, host.data(), &(sock_in.sin_addr)) < 0) {
            std::cout << "host to inet failed" << std::endl;
        }
        sock_in.sin_port = htons(SERVER_PORT);
        sock_in.sin_family = AF_INET;
    }

    HostTransport(const char* host)
    {
        int inet = inet_pton(AF_INET, host, &(sock_in.sin_addr));
        if (inet < 0) {
            std::cout << "host to inet failed" << std::endl;
        }
    }

    sockaddr_in operator()() {
        return this->sock_in;
    }

private:
    sockaddr_in sock_in;
};

#endif //EASYSOCKET_HOSTTRANS_H
