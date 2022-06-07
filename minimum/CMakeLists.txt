cmake_minimum_required(VERSION 3.22)
project(testing C)

set(CMAKE_C_STANDARD 99)

add_executable(testing src/main.c test/TestMain.c)
