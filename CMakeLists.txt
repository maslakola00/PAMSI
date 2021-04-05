cmake_minimum_required(VERSION 3.15)
project(PAMSI)

set(CMAKE_CXX_STANDARD 14)
set(DCMAKE_SH="CMAKE_SH-NOTFOUND")

add_executable(PAMSI LinkedList.cpp main.cpp  PriorityQueue.cpp SNode.cpp templates.cpp)