cmake_minimum_required(VERSION 3.16.3)
project(EasySocket)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(EasyClient easyClient)
add_subdirectory(EasyServer easyServer)

add_executable(EasySocket main.cpp)
