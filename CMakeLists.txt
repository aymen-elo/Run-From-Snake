cmake_minimum_required(VERSION 3.25)
project(Run_From_Snake)

set(CMAKE_CXX_STANDARD 17)

add_executable(Run_From_Snake main.cpp src/Person.h src/Person.h src/Person.cpp src/Snake.h src/Snake.cpp src/Grid.h src/Grid.cpp)
