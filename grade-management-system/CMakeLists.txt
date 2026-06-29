cmake_minimum_required(VERSION 4.1)
project(GradeManagementSystem)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    main.cpp
)

add_executable(grade_analyzer ${SOURCES})
message(STATUS "Source files: ${SOURCES}")
