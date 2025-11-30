cmake_minimum_required(VERSION 3.10)

project(c_cmake_tut LANGUAGES C CXX ASM)

add_executable(hello_world hello_world.c)
add_executable(hello_world++ hello_world.cpp)
add_executable(types types.c)
add_executable(types++ types.cpp)
