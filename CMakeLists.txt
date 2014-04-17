# Project Euler Exercises

cmake_minimum_required(VERSION 2.6)

project(euler)

include_directories(${PROJECT_BINARY_DIR}/src/)

# Configure the compiler for C++0x (C++ 11).
if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall -std=c++0x")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src)
