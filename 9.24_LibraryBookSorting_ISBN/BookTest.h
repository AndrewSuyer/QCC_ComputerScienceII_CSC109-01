/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */

#ifndef INC_9_24_LIBRARYBOOKSORTING_ISBN_BOOKTEST_H
#define INC_9_24_LIBRARYBOOKSORTING_ISBN_BOOKTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Book.h"

class BookTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testBook()
    {
        Book b1;
        Book b2("Harry Potter", "J.K. Rowling", 9780747532743);

        TS_ASSERT_EQUALS(b1.GetBookISBN(), 0)
        TS_ASSERT_EQUALS(b2.GetBookISBN(), 9780747532743)

        std::cout << std::endl << "  Test b1.PrintInfo():" << std::endl;
        b1.PrintInfo();
        std::cout << "  Test b2.PrintInfo():" << std::endl;
        b2.PrintInfo();
    }

};


#endif // INC_9_24_LIBRARYBOOKSORTING_ISBN_BOOKTEST_H
