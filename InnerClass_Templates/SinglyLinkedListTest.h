/*
 * Copyright 2023
 * Created by Andrew Suyer
 */

#ifndef INNERCLASS_TEMPLATES_SINGLYLINKEDLISTTEST_H
#define INNERCLASS_TEMPLATES_SINGLYLINKEDLISTTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "SinglyLinkedList.h"
#include "Iterator.h"

class SinglyLinkedListTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testBasics()
    {
        SinglyLinkedList<int> li;
        SinglyLinkedList<double> ld;

        Iterator<int> i;

    }

};


#endif // INNERCLASS_TEMPLATES_SINGLYLINKEDLISTTEST_H
