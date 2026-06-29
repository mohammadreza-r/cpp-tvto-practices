cmake_minimum_required(VERSION 4.1)
project(newToLearn)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
        main.cpp
        myHeader.cpp
)

add_executable(newToLearn ${SOURCES})
message(STATUS "Source files: ${SOURCES}")
