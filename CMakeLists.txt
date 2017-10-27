cmake_minimum_required(VERSION 3.8)
project(cppPonto2d)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ponto2d.cpp Ponto2d.h)
add_executable(cppPonto2d ${SOURCE_FILES})