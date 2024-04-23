cmake_minimum_required(VERSION 3.14)
project(gtest_examples)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()
add_subdirectory(googletest)
add_subdirectory(src bin)
add_subdirectory(test)

