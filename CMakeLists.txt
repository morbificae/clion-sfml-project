cmake_minimum_required(VERSION 3.5)
project(sfml_game)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(sfml_game ${SOURCE_FILES})
target_link_libraries(sfml_game sfml-system sfml-graphics sfml-window)