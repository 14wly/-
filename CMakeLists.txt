cmake_minimum_required(VERSION 3.27)
project(Cpp_practice)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cpp_practice
        main.cpp
        MyString.cpp
        MyString.h)
