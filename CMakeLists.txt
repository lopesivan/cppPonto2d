cmake_minimum_required(VERSION 3.8)
project(cppPonto2d)

set(CMAKE_CXX_STANDARD 11)

set(HEADER_FILES inc/Ponto2d.h)
set(SOURCE_FILES main.cpp Ponto2d.cpp)

include_directories(inc)
add_executable(cppPonto2d ${SOURCE_FILES} ${HEADER_FILES})
