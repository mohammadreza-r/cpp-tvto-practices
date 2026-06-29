cmake_minimum_required(VERSION 4.1)
project(StudentNameManager)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
        main.cpp
)

add_executable(student_manager ${SOURCES})
message(STATUS "Source files: ${SOURCES}")
