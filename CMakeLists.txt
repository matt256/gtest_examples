cmake_minimum_required(VERSION 3.14)
project(gtest_setup)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
add_subdirectory(googletest)

add_executable( runUnitTests testgtest.cpp )
target_link_libraries(runUnitTests gtest gtest_main)
add_test( runUnitTests runUnitTests )