cmake_minimum_required(VERSION 3.13)
project(c-compile-execute-by-hand C)

set(CMAKE_C_STANDARD 11)

add_executable(ccebh main.c negate.c negate.h)
