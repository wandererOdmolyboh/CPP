cmake_minimum_required(VERSION 3.14)
project(pool)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SRC ex02/*.cpp)

add_executable(pool ${SRC})