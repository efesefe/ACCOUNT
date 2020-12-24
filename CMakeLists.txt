cmake_minimum_required(VERSION 3.17)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_library(untitled1 SHARED Account.cpp Account.h Employee.cpp Employee.h People.cpp People.h Task.cpp Task.h Stuff.cpp Stuff.h)