/*
 * Copyright 2023
 * Created by Andrew Suyer
 */

#ifndef BOOKSTORE_BOOKTEST_H
#define BOOKSTORE_BOOKTEST_H


#include <cxxtest/TestSuite.h>

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

    void testGettersAndSetters()
    {
        Book defaultBook;
        Book book1("Harry Potter", "J.K Rowling", 800, 30.00);

        TS_ASSERT_EQUALS(defaultBook.getTitle(), "none");
        TS_ASSERT_EQUALS(defaultBook.getAuthor(), "none");
        TS_ASSERT_EQUALS(defaultBook.getPages(), 0);
        TS_ASSERT_EQUALS(defaultBook.getPrice(), 0.0);

        TS_ASSERT_EQUALS(book1.getTitle(), "Harry Potter");
        TS_ASSERT_EQUALS(book1.getAuthor(), "J.K Rowling");
        TS_ASSERT_EQUALS(book1.getPages(), 800);
        TS_ASSERT_EQUALS(book1.getPrice(), 30.0);

        defaultBook.setAuthor("Andrew");
        defaultBook.setTitle("Life lessons");
        defaultBook.setPages(100);
        defaultBook.setPrice(1000.0);

        TS_ASSERT_EQUALS(defaultBook.getTitle(), "Life lessons");
        TS_ASSERT_EQUALS(defaultBook.getAuthor(), "Andrew");
        TS_ASSERT_EQUALS(defaultBook.getPages(), 100);
        TS_ASSERT_EQUALS(defaultBook.getPrice(), 1000.0);
    }

    void testPrintInfo()
    {
        Book defaultBook;
        Book book1("Harry Potter", "J.K Rowling", 800, 30.00);

        defaultBook.printInfo();
        book1.printInfo();
    }

    void testComparisonOperators()
    {
        Book b1;
        Book b2("Name", "Andrew", 100, 0.0);
        Book b3("Title", "Suyer", 100, 10.0);
        Book b4;
        b4.setPages(200);

        // ==
        TS_ASSERT(b2 == b3);

        // >
        TS_ASSERT(b4 > b2);
        TS_ASSERT(b4 > b3);

        // !=
        TS_ASSERT(b1 != b2);
        TS_ASSERT(b4 != b3);

        // <=
        TS_ASSERT(b2 <= b4);
        TS_ASSERT(b2 <= b3);

        // <
        TS_ASSERT(b2 < b4);
        TS_ASSERT(b1 < b2);

        // >=
        TS_ASSERT(b4 >= b2);
        TS_ASSERT(b2 >= b3);
    }


};


#endif // BOOKSTORE_BOOKTEST_H
