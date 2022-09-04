cmake_minimum_required(VERSION 3.13)

project(nominator)

file(STRINGS ${CMAKE_CURRENT_SOURCE_DIR}/version PACKAGE_VERSION)
message("Version is ${PACKAGE_VERSION}")

set(CMAKE_CXX_STANDARD 17)

set(SOURCES main.cpp)

add_executable(nominator ${SOURCES})