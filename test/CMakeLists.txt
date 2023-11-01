set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG main
    EXCLUDE_FROM_ALL
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
add_library(GTest::Gtest INTERFACE IMPORTED)
enable_testing()
#target_include_directories(hello_test PRIVATE ${goolgetest_INCLUDE_DIR})
aux_source_directory(${CMAKE_SOURCE_DIR}/test current_test_file)    
#message(${src_files})
add_executable(hello_test ${current_test_file} ${src_files})
set_target_properties(hello_test PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)
target_include_directories(hello_test PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(hello_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test)