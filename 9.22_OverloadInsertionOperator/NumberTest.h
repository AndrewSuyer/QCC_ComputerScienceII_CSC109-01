/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.22 Overload operator<<
 */

#ifndef INC_9_22_OVERLOADOPERATOR_NUMBERTEST_H
#define INC_9_22_OVERLOADOPERATOR_NUMBERTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Number.h"

class NumberTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGetterAndSetter()
    {
        Number n1(2);
        Number n2(4);

        TS_ASSERT_EQUALS(n1.GetNum(), 2)
        TS_ASSERT_EQUALS(n2.GetNum(), 4)

        n1.SetNum(5);
        TS_ASSERT_EQUALS(n1.GetNum(), 5)
    }

    void testInsertionOperator()
    {
        std::ostringstream oStrStream;
        Number n1(2);
        oStrStream << n1;

        TS_ASSERT_EQUALS(oStrStream.str(), "The value is 2\n")
    }

};


#endif // INC_9_22_OVERLOADOPERATOR_NUMBERTEST_H
