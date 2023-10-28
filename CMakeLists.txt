cmake_minimum_required(VERSION 3.20)
project(main)
include_directories(include)
aux_source_directory(src src_files)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED on)
add_executable(main main.cpp ${src_files})

message("build project success")











