/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 11 exam
 */

#ifndef CH11EXAM_ITEMTEST_H
#define CH11EXAM_ITEMTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Item.h"

class ItemTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Item i("Item1", 10.0);

        TS_ASSERT_EQUALS(i.getName(), "Item1")
        TS_ASSERT_DELTA(i.getPrice(), 10.0, 0.0001)

        std::ostringstream oss;
        oss << i;

        TS_ASSERT_EQUALS(oss.str(), "name: Item1 price: 10")
    }

};


#endif // CH11EXAM_ITEMTEST_H
