cmake_minimum_required(VERSION 3.22)
project(termWork)

set(CMAKE_CXX_STANDARD 17)

add_executable(termWork main.cpp Person.cpp Person.h Teacher.cpp Teacher.h Worker.cpp Worker.h)
