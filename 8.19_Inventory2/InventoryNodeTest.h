/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.19 Inventory 2
 */

#ifndef INC_8_19_INVENTORY2_INVENTORYNODETEST_H
#define INC_8_19_INVENTORY2_INVENTORYNODETEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "InventoryNode.h"

class InventoryNodeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testInsertAtFront()
    {
        InventoryNode n1;
        InventoryNode n3("Chips", 3);
        InventoryNode n2("Cheese", 2, &n3);

        TS_ASSERT_EQUALS(n2.GetItem(), "Cheese")
        TS_ASSERT_EQUALS(n3.GetItem(), "Chips")
        TS_ASSERT_EQUALS(n2.GetNumberOfItems(), 2)
        TS_ASSERT_EQUALS(n3.GetNumberOfItems(), 3)

        InventoryNode* head = &n1;
        n3.InsertAtFront(head, &n3);
        n2.InsertAtFront(head, &n2);

        TS_ASSERT_EQUALS(head, &n1)
        TS_ASSERT_EQUALS(n1.GetNext(), &n2)
        TS_ASSERT_EQUALS(n2.GetNext(), &n3)
        TS_ASSERT_EQUALS(n3.GetNext(), nullptr)

        n3.PrintNodeData();
    }

};


#endif // INC_8_19_INVENTORY2_INVENTORYNODETEST_H
