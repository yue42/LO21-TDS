cmake_minimum_required(VERSION 3.23)
project(LO21_TDS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LO21_TDS
        function.cpp
        function.h
        main.cpp)
