# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(main)
include_directories(include)
aux_source_directory(src src_files)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
add_executable(main ${src_files})

message("build project success")

#enable_testing()
add_subdirectory(googletest)
include_directories(googletest/googletest/include)
set(GTEST_LIB gtest gtest_main)
#add_executable(test_addBinary test/test.cpp)
target_link_libraries(main gtest gtest_main)
#add_executable(gtest test/test.cpp)










