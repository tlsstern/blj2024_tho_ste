cmake_minimum_required(VERSION 3.29)
project(Lights_Out C)

set(CMAKE_C_STANDARD 11)

add_executable(Lights_Out main.c
        lightsout.c)
