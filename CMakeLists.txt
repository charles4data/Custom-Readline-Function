cmake_minimum_required(VERSION 3.26)
project(CustomReadline C)

set(CMAKE_C_STANDARD 90)

add_executable(CustomReadline main.c
        _putchar.c
        _strlen.c)
