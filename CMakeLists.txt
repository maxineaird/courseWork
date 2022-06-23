cmake_minimum_required(VERSION 3.22)
project(courseWork)

set(CMAKE_CXX_STANDARD 17)

add_library(courseWork Person.cpp Electric.cpp Electric.h Teacher.cpp Teacher.h main.cpp Person.h)
