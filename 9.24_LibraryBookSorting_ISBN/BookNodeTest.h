/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */

#ifndef INC_9_24_LIBRARYBOOKSORTING_ISBN_BOOKNODETEST_H
#define INC_9_24_LIBRARYBOOKSORTING_ISBN_BOOKNODETEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "BookNode.h"

class BookNodeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testConstructors()
    {
        BookNode n1;
        BookNode n2("Harry Potter", "J.K. Rowling", 9780747532743);
        BookNode n3("Telephones", "Professor poopy pants", 12345678901234, &n2);

        TS_ASSERT_EQUALS(n1.GetBookISBN(), 0)
        TS_ASSERT_EQUALS(n2.GetBookISBN(), 9780747532743)
        TS_ASSERT_EQUALS(n3.GetBookISBN(), 12345678901234)

        TS_ASSERT_EQUALS(n1.GetNext(), nullptr)
        TS_ASSERT_EQUALS(n2.GetNext(), nullptr)
        TS_ASSERT_EQUALS(n3.GetNext(), &n2)
    }

    void testListConstruction()
    {
        BookNode n1;
        BookNode n2("Harry Potter", "J.K. Rowling", 9780747532743);
        BookNode n3("Telephones", "Professor poopy pants", 12345678901234);

        n1.insertAfter(&n2);
        n2.insertAfter(&n3);

        TS_ASSERT_EQUALS(n1.GetNext(), &n2)
        TS_ASSERT_EQUALS(n2.GetNext(), &n3)
        TS_ASSERT_EQUALS(n3.GetNext(), nullptr)

        n2.SetNext(nullptr);
        n1.SetNext(&n3);

        TS_ASSERT_EQUALS(n1.GetNext(), &n3)
        TS_ASSERT_EQUALS(n2.GetNext(), nullptr)
        TS_ASSERT_EQUALS(n3.GetNext(), nullptr)
    }

    void testPrintBookInfo()
    {
        BookNode n2("Harry Potter", "J.K. Rowling", 9780747532743);

        std::cout << std::endl << "test n2.PrintBookInfo():" << std::endl;
        n2.PrintBookInfo();
    }

};


#endif // INC_9_24_LIBRARYBOOKSORTING_ISBN_BOOKNODETEST_H
