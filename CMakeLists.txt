cmake_minimum_required(VERSION 3.21)
project(Atividade05 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Atividade05
        main.c
        TabelaHash.c
        TabelaHash.h
        )
