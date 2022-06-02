cmake_minimum_required(VERSION 3.5)

project(PokeroweKombinacje LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(PokeroweKombinacje main.cpp losowanie.h losowanie.cpp karty.h kombinacje.h kombinacje.cpp druk.h druk.cpp)
