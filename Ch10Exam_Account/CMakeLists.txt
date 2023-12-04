cmake_minimum_required(VERSION 3.26)
project(Ch10Exam_Account)

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
            ${CMAKE_CURRENT_SOURCE_DIR}/Account.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Checking.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Savings.cpp

            # Test files:
            ${CMAKE_CURRENT_SOURCE_DIR}/AccountTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/CheckingTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/SavingsTest.h
    )
endif ()

add_executable(Ch10Exam_Account
#        main.cpp
        runner.cpp
        Account.h
        Account.cpp
        Checking.h
        Checking.cpp
        Savings.h
        Savings.cpp)
