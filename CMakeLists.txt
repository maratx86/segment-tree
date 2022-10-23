cmake_minimum_required(VERSION 3.20)
project(segment_tree)

set(CMAKE_CXX_STANDARD 11)

add_executable(segment_tree main.cpp Node.cpp Node.h Root.cpp Root.h)
add_executable(segment_tree_tests tests.cpp Node.cpp Node.h Root.cpp Root.h)
