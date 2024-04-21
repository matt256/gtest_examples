enable_testing()

add_executable(
    testgtest
    testgtest.cpp
)

add_executable(
    test_math
    test_math.cpp
)
target_include_directories(test_math ../src)

target_link_libraries(
    testgtest
    GTest::gtest_main
)
target_link_libraries(
    test_math
    GTest::gtest_main
)
add_test( 
    NAME testgtest 
    COMMAND testgtest)


add_test( 
    NAME test_math 
    COMMAND test_math)