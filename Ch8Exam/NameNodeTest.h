/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch8 exam
 */

#ifndef CH8EXAM_NAMENODETEST_H
#define CH8EXAM_NAMENODETEST_H

#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "NameNode.h"

class NameNodeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testConstructors()
    {
        NameNode n1;
        NameNode n2("Andrew", 17);

        TS_ASSERT_EQUALS(n1.getName(), "");
        TS_ASSERT_EQUALS(n1.getAge(), 0);
        TS_ASSERT_EQUALS(n1.getNext(), nullptr)

        TS_ASSERT_EQUALS(n2.getName(), "Andrew");
        TS_ASSERT_EQUALS(n2.getAge(), 17);
        TS_ASSERT_EQUALS(n2.getNext(), nullptr)
    }

    void testSetters()
    {
        NameNode n1;

        n1.setName("Andrew");
        n1.setAge(17);

        TS_ASSERT_EQUALS(n1.getName(), "Andrew")
        TS_ASSERT_EQUALS(n1.getAge(), 17)
        TS_ASSERT_EQUALS(n1.getNext(), nullptr)

        NameNode n2("Nathan", 15);
        n1.setNext(&n2);

        TS_ASSERT_EQUALS(n1.getNext(), &n2);
        TS_ASSERT_EQUALS(n2.getNext(), nullptr)
    }

    void testPrintdata()
    {
        NameNode n1("Andrew", 17);

        n1.printdata();

    }

};

#endif // CH8EXAM_NAMENODETEST_H
