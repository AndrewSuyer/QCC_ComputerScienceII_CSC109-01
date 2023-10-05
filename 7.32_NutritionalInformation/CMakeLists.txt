cmake_minimum_required(VERSION 3.26)
project(7_32_NutritionalInformation)

set(CMAKE_CXX_STANDARD 17)

# setting up CxxTest
set(CXXTEST_INCLUDE_DIR /home/andrewsuyer/CxxTest/cxxtest-4.4/)
set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE /usr/local/bin/cxxtestgen)
find_package(CxxTest REQUIRED)
if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
    CXXTEST_ADD_TEST(unittest
            # runner.cpp is made automatically, contains a main()
            # Remove other main functions to perform tests
            runner.cpp

            # Source files to test:
            ${CMAKE_CURRENT_SOURCE_DIR}/FoodItem.cpp

            # Test file:
            ${CMAKE_CURRENT_SOURCE_DIR}/FoodItemTest.h
    )
endif()

add_executable(7_32_NutritionalInformation
#        main.cpp
        runner.cpp
        FoodItem.cpp
        FoodItem.h
        FoodItemTest.h)
