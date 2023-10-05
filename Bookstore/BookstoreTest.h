/*
 * Copyright 2023
 * Created by Andrew Suyer
 */

#ifndef BOOKSTORE_BOOKSTORETEST_H
#define BOOKSTORE_BOOKSTORETEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Bookstore.h"

class BookstoreTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGettersAndSetters()
    {
        Bookstore defaultStore;
        Bookstore store1("Barnes and Nobel");

        TS_ASSERT_EQUALS(defaultStore.getStoreName(), "none");
        TS_ASSERT_EQUALS(store1.getStoreName(), "Barnes and Nobel");
    }

};


#endif // BOOKSTORE_BOOKSTORETEST_H
