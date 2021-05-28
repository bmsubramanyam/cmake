cmake_minimum_required(VERSION 3.20.2)

project(cmake_adder)

#include_directories(Adder)

add_subdirectory(Adder)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_libraries(${PROJECT_NAME} PUBLIC Adder)