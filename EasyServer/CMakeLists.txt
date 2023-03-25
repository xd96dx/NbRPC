cmake_minimum_required(VERSION 3.16.3)

set(COMMON_DIR "../common")

include_directories(${COMMON_DIR})

add_executable(easy_server main.cpp EasyServer.cpp)
