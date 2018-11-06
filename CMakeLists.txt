cmake_minimum_required(VERSION 3.1)

project(ProtobufExample CXX)
set(CMAKE_CXX_STANDARD 11)

find_package(protobuf 3.6.1 REQUIRED)

add_subdirectory(messages)
add_subdirectory(library)
add_subdirectory(executable)
