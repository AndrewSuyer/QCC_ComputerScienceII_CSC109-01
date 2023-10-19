/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */


#ifndef INC_9_24_LIBRARYBOOKSORTING_ISBN_VECTORLIBRARYTEST_H
#define INC_9_24_LIBRARYBOOKSORTING_ISBN_VECTORLIBRARYTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "VectorLibrary.h"

class VectorLibraryTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testInsertSorted()
    {
        VectorLibrary list;

        Book b1;
        Book b2("A", "a", 123456);
        Book b3("B", "b", 234567);
        Book b4("C", "c", 345678);

        int counter = 0;
        counter = list.InsertSorted(b1, counter);
        counter = list.InsertSorted(b3, counter);
        counter = list.InsertSorted(b2, counter);
        counter = list.InsertSorted(b4, counter);

        std::cout << std::endl << "Printing vector library:" << std::endl;
        list.PrintLibrary();
    }

};


#endif // INC_9_24_LIBRARYBOOKSORTING_ISBN_VECTORLIBRARYTEST_H
