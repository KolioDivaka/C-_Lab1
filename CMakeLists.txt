cmake_minimum_required(VERSION 4.3)
project(lab1)

set(CMAKE_CXX_STANDARD 26)

add_executable(lab1 main.cpp
        exercice1/Time.cpp
        exercice1/Time.h
        Exercice2/Worker.cpp
        Exercice2/Worker.h
)
