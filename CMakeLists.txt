cmake_minimum_required(VERSION 3.30)
project(Basic)

set(CMAKE_CXX_STANDARD 20)

add_executable(Basic basic_destructor.cpp
        liskov_principle_destructor.cpp)
