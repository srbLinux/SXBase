cmake_minimum_required(VERSION 3.0)

PROJECT(STRING)

add_definitions(-std=c++14)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE cpp_files ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME} ${cpp_files})