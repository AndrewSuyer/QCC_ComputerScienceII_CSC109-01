cmake_minimum_required(VERSION 3.26)
project(6_72_2DArrayPointers)

set(CMAKE_CXX_STANDARD 17)

# setting up CxxTest (delete this if its not needed)
set(CXXTEST_INCLUDE_DIR /home/andrewsuyer/CxxTest/cxxtest-4.4/)
set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE /usr/local/bin/cxxtestgen)
find_package(CxxTest REQUIRED)
if (CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
    CXXTEST_ADD_TEST(unittest
            # runner.cpp is made automatically, contains a main()
            # Remove other main functions to perform tests
            runner.cpp

            # Source files to test:
            ${CMAKE_CURRENT_SOURCE_DIR}/TwoDArray.cpp

            # Test files:
            ${CMAKE_CURRENT_SOURCE_DIR}/TwoDArrayTest.h
    )
endif ()

add_executable(6_72_2DArrayPointers
#        main.cpp
        runner.cpp
        TwoDArray.cpp
        TwoDArray.h)
