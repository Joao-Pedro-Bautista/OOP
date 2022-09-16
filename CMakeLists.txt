cmake_minimum_required(VERSION 3.23)
project(calculadora)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(calculadora
        calculator.hpp
        console.cpp
        console.hpp
        CPUJoaoPedro.cpp
        CPUJoaoPedro.hpp
        DisplayJoaoPedro.cpp
        DisplayJoaoPedro.hpp
        main.cpp)
