cmake_minimum_required(VERSION 3.26)
project(9_24_LibraryBookSorting_ISBN)

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
            ${CMAKE_CURRENT_SOURCE_DIR}/Book.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/BookNode.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/LinkedListLibrary.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/VectorLibrary.cpp

            # Test files:
            ${CMAKE_CURRENT_SOURCE_DIR}/BookTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/BookNodeTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/LinkedListLibraryTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/VectorLibraryTest.h
    )
endif ()

add_executable(9_24_LibraryBookSorting_ISBN
#        main.cpp
        runner.cpp
        Book.h Book.cpp
        BookNode.h BookNode.cpp
        LinkedListLibrary.h LinkedListLibrary.cpp
        VectorLibrary.h VectorLibrary.cpp)
