cmake_minimum_required(VERSION 3.31)
project(Scanner_modular)

set(CMAKE_CXX_STANDARD 20)

add_executable(Scanner_modular main.cpp
        scanner.h
        scanner.cpp)
