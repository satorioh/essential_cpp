cmake_minimum_required(VERSION 3.28)
project(essential_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(essential_cpp main.cpp
        io.cpp
        io.h)
