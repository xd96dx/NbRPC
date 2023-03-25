//
// Created by xd on 3/25/23.
//
#include <iostream>
#include "toolkit/HostTrans.h"
#include "EasyClient.h"

int main() {
    EasyClient client("192.168.1.1");
    std::cout << "easy client start in: " << client.getAddress() << std::endl;
}