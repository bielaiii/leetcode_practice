cmake_minimum_required(VERSION 3.20)


project(main)
aux_source_directory(${CMAKE_SOURCE_DIR}/src src_files)
#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED on)
add_executable(main main.cpp ${src_files})

set(EXPORT_COMPILE_COMMANDS ON)
include_directories(main PRIVATE include)

message("build project success")

set_target_properties(${PROJECT_NAME}
    PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE}/$<0:>
)


target_compile_options(${PROJECT_NAME} PRIVATE 
    $<$<CXX_COMPILER_ID:GNU>:
        $<$<CONFIG:Debug>:-Wall -pedantic -g>
        $<$<CONFIG:Release>:-O3>
    >
    $<$<CXX_COMPILER_ID:Clang>:
        $<$<CONFIG:Debug>: -g -Wno-c++98-compat >
        #$<$<CONFIG:Debug>: -g -Wno-c++98-compat -fsanitize=address -fno-omit-frame-pointer>
        $<$<CONFIG:Release>:-O3>
    >
)


add_subdirectory(test)

#include(FetchContent)
#FetchContent_Declare(
#  googletest
#  URL https://github.com/google/googletest/archive/3596a01ee50ed33e9dfd640b249b4be3799d395.zip
#)
## For Windows: Prevent overriding the parent project's compiler/linker settings
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#FetchContent_MakeAvailable(googletest)
#
#enable_testing()
#
#add_executable(test_temp ${CMAKE_SOURCE_DIR}/test/test_maxArea1.cpp)
#set_target_properties(test_temp PROPERTIES 
#    CXX_STANDARD 20
#    CXX_STANDARD_REQUIRED ON
#)
#target_link_libraries(
#    test_temp
#    GTest::gtest_main
#
#)
#
#include(GoogleTest)
#gtest_discover_tests(test_temp)