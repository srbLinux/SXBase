cmake_minimum_required(VERSION 3.0)

PROJECT(MAXRIX)

add_definitions(-std=c++11)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/Include)

file(GLOB_RECURSE cpp_files ${PROJECT_SOURCE_DIR}/Src/*.cpp)

add_executable(${PROJECT_NAME} ${cpp_files})