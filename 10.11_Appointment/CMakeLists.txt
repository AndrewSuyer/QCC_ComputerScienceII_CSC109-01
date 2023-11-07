cmake_minimum_required(VERSION 3.26)
project(10_11_Appointment)

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
            ${CMAKE_CURRENT_SOURCE_DIR}/Date.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Time.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Daily.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Monthly.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Onetime.cpp

            # Test files:
            ${CMAKE_CURRENT_SOURCE_DIR}/DateTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/TimeTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/DailyTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/MonthlyTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/OnetimeTest.h
    )
endif ()

add_executable(10_11_Appointment
        main.cpp
#        runner.cpp
        Daily.h
        Daily.cpp
        Date.h
        Date.cpp
        Monthly.h
        Monthly.cpp
        Time.h
        Time.cpp
        Appointment.h
        Appointment.cpp
        Onetime.cpp
        Onetime.h)

