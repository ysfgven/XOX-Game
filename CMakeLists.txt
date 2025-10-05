cmake_minimum_required(VERSION 3.10)
project(XOX_Game)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

file(GLOB SOURCES
        src/*.cpp
        main.cpp
)

add_executable(XOX_Game ${SOURCES})
