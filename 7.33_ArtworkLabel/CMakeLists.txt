cmake_minimum_required(VERSION 3.26)
project(7_33_ArtworkLabel)

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
            ${CMAKE_CURRENT_SOURCE_DIR}/Artist.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Artwork.cpp

            # Test file:
            ${CMAKE_CURRENT_SOURCE_DIR}/ArtistTest.h
            ${CMAKE_CURRENT_SOURCE_DIR}/ArtworkTest.h
    )
endif()

add_executable(7_33_ArtworkLabel
#        main.cpp
        runner.cpp
        Artist.cpp
        Artist.h
        Artwork.cpp
        Artwork.h
        ArtistTest.h
        ArtworkTest.h)
