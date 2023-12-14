/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 HW part B
 */

#ifndef CH12_HW_B_LINKEDLIST_NODETEST_H
#define CH12_HW_B_LINKEDLIST_NODETEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Node.h"

class NodeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGettersAndSetters()
    {
        Node<int> n1;
        Node<int> n2(2);
        Node<int> n3 = n2;

        TS_ASSERT_EQUALS(n3.GetData(), 2)

        // Setter for data:
        n3.SetData(3);

        // Getters:
        TS_ASSERT_EQUALS(n1.GetData(), 0)
        TS_ASSERT_EQUALS(n2.GetData(), 2)
        TS_ASSERT_EQUALS(n3.GetData(), 3)

    }


    void testListConstruction()
    {
        Node<int> n1(1);
        Node<int> n2(2);
        Node<int> n3(3);

        // Constructing list:
        n1.SetNext(&n2);
        n2.SetNext(&n3);

        TS_ASSERT_EQUALS(n1.GetNext(), &n2)
        TS_ASSERT_EQUALS(n2.GetNext(), &n3)
        TS_ASSERT_EQUALS(n3.GetNext(), nullptr)
    }

};


#endif // CH12_HW_B_LINKEDLIST_NODETEST_H
