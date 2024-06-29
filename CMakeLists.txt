cmake_minimum_required(VERSION 3.22)
project(firstprogam)

set(CMAKE_CXX_STANDARD 20)

add_executable(firstprogam main.cpp Animal.cpp Dog.cpp Cat.cpp)
