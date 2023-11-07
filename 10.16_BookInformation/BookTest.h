/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.16 Book information
 */

#ifndef INC_10_16_BOOKINFORMATION_BOOKTEST_H
#define INC_10_16_BOOKINFORMATION_BOOKTEST_H


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

    void testAll()
    {
        Book b;

        b.SetTitle("Harry Potter");
        b.SetAuthor("JK Rowling");
        b.SetPublisher("Barnes and Nobel");
        b.SetPublicationDate("January 2000");

        TS_ASSERT_EQUALS(b.GetTitle(), "Harry Potter")
        TS_ASSERT_EQUALS(b.GetAuthor(), "JK Rowling")
        TS_ASSERT_EQUALS(b.GetPublisher(), "Barnes and Nobel")
        TS_ASSERT_EQUALS(b.GetPublicationDate(), "January 2000")

        std::cout << "\nTesting Book::PrintInfo()\n";
        b.PrintInfo();
    }

};


#endif // INC_10_16_BOOKINFORMATION_BOOKTEST_H
