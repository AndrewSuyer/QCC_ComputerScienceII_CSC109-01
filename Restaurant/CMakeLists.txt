cmake_minimum_required(VERSION 3.26)
project(Restaurant)

set(CMAKE_CXX_STANDARD 17)

add_executable(Restaurant main.cpp
        Restaurant.cpp
        Restaurant.h)
