//
// Created by xd on 3/25/23.
//

#ifndef EASYSOCKET_ADDRESS_H
#define EASYSOCKET_ADDRESS_H

#include <string>
#include <cstring>
#include <bits/socket.h>

class Address
{
public:
    Address(const char* address)
    {

    }

    Address(const std::string& address)
    {
        if (address.find(':')) {

        } else {
            this->host = address;
            this->port = std::to_string(SERVER_PORT);
            this->sa = AF_INET;
        }
    }

private:
    std::string host;
    std::string port;
    sa_family_t sa;
};

#endif //EASYSOCKET_ADDRESS_H
