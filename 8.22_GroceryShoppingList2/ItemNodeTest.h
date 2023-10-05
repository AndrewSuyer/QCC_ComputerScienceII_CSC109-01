/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.22 Grocery shopping list 2
 */

#ifndef INC_8_22_GROCERYSHOPPINGLIST2_ITEMNODETEST_H
#define INC_8_22_GROCERYSHOPPINGLIST2_ITEMNODETEST_H

#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "ItemNode.h"

class ItemNodeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testFUNCTION()
    {
        ItemNode* head;
        ItemNode* tail;
        ItemNode n2("Cheese");
        ItemNode n1("Drinks", &n2);
        ItemNode n3;

        head = &n1;
        tail = &n2;
        n2.InsertAfter(&n1);
        n3.InsertAtEnd(head, tail);
        tail = &n3;

        TS_ASSERT_EQUALS(n1.GetItem(), "Drinks")
        TS_ASSERT_EQUALS(n2.GetItem(), "Cheese")
        TS_ASSERT_EQUALS(n3.GetItem(), "")

        TS_ASSERT_EQUALS(n1.GetNext(), &n2)
        TS_ASSERT_EQUALS(n2.GetNext(), &n3)
        TS_ASSERT_EQUALS(n3.GetNext(), nullptr)

        n1.PrintNodeData();
    }


};


#endif // INC_8_22_GROCERYSHOPPINGLIST2_ITEMNODETEST_H
