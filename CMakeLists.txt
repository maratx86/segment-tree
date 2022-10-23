cmake_minimum_required(VERSION 3.20)
project(segment_tree)

set(CMAKE_CXX_STANDARD 11)

add_executable(segment_tree
        srcs/main.cpp
        srcs/Node.cpp includes/Node.h
        srcs/Root.cpp includes/Root.h
        )
add_executable(segment_tree_tests
        srcs/tests.cpp
        srcs/Node.cpp includes/Node.h
        srcs/Root.cpp includes/Root.h
        )
