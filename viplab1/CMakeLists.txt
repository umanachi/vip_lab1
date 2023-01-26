cmake_minimum_required(VERSION 3.18) # ensure cmake is at least minimum version
project(week-one-lab VERSION 1.0.0) # project name and version number

#message("Hello World")

add_executable(hello_world) # create new program
target_sources(hello_world PRIVATE src/hello.cpp src/name.cpp) # what source code file we want to use
target_include_directories(hello_world PRIVATE include) # where to find header files