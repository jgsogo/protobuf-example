cmake_minimum_required(VERSION 3.1)

add_library(library worker.h worker.cpp)
target_link_libraries(library PUBLIC messages)
