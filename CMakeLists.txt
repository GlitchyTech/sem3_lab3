cmake_minimum_required(VERSION 3.17)
project(sem3_lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(sem3_lab3 ArraySequence.hpp DynamicArray.hpp Graph.cpp Graph.hpp interface.hpp main.cpp
               LinkedList.hpp ListSequence.hpp my_sorts.hpp Sequence.hpp Test_graph.hpp)