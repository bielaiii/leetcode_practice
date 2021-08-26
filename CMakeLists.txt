# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(demo)

# 设置
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

 #SET(CMAKE_BUILE_TYPE DEBUG)                      #指定编译类型
 #SET(CMAKE_CXX_FLAGS_DEBUG "-g -Wall")          #指定编译器 
aux_source_directory(. SRC_LIST)
# 编译源码生成目标
add_executable(demo ${SRC_LIST})