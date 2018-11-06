cmake_minimum_required(VERSION 3.1)

project(ProtobufExample CXX)
include(GenerateExportHeader)

set(CMAKE_CXX_STANDARD 11)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#option(protobuf_MODULE_COMPATIBLE "protobuf" ON)
find_package(protobuf 3.6.1 REQUIRED)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_subdirectory(messages)
add_subdirectory(library)
add_subdirectory(executable)
