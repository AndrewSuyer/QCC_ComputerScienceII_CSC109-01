/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.38 Online shopping cart (part 1)
 */

#ifndef INC_7_38_ONLINESHOPPINGCART_P1_ITEMTOPURCHASETEST_H
#define INC_7_38_ONLINESHOPPINGCART_P1_ITEMTOPURCHASETEST_H

#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "ItemToPurchase.h"

class ItemToPurchaseTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)
    ItemToPurchase defaultItem;
    ItemToPurchase item1;
    ItemToPurchase item2;
    ItemToPurchase item3;

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    ItemToPurchaseTest() :
        defaultItem(), item1(), item2(), item3("Cerial", "very yummy", 5, 1)
    {
        // Testing setters:
        // 2 "Chips" each costing $5
        item1.SetName("Chips");
        item1.SetDescription("Crunchy");
        item1.SetPrice(5);
        item1.SetQuantity(2);

        // 10 "Bottled Water" each costing $1
        item2.SetName("Bottled Water");
        item2.SetDescription("Liquid");
        item2.SetPrice(1);
        item2.SetQuantity(10);
    }

    void testGetters()
    {
        TS_ASSERT_EQUALS(defaultItem.GetName(), "none");
        TS_ASSERT_EQUALS(defaultItem.GetDescription(), "none");
        TS_ASSERT_EQUALS(defaultItem.GetPrice(), 0);
        TS_ASSERT_EQUALS(defaultItem.GetQuantity(), 0);

        TS_ASSERT_EQUALS(item1.GetName(), "Chips");
        TS_ASSERT_EQUALS(item1.GetDescription(), "Crunchy");
        TS_ASSERT_EQUALS(item1.GetPrice(), 5);
        TS_ASSERT_EQUALS(item1.GetQuantity(), 2);

        TS_ASSERT_EQUALS(item2.GetName(), "Bottled Water");
        TS_ASSERT_EQUALS(item2.GetDescription(), "Liquid");
        TS_ASSERT_EQUALS(item2.GetPrice(), 1);
        TS_ASSERT_EQUALS(item2.GetQuantity(), 10);

        TS_ASSERT_EQUALS(item3.GetName(), "Cerial");
        TS_ASSERT_EQUALS(item3.GetDescription(), "very yummy")
        TS_ASSERT_EQUALS(item3.GetPrice(), 5);
        TS_ASSERT_EQUALS(item3.GetQuantity(), 1);
    }

    void testPrinters()
    {
        // Print item cost:
        defaultItem.PrintItemCost();
        item1.PrintItemCost();
        item2.PrintItemCost();
        item3.PrintItemCost();

        // Print item description
        defaultItem.PrintItemDescription();
        item1.PrintItemDescription();
        item2.PrintItemDescription();
        item3.PrintItemDescription();
    }

};


#endif // INC_7_38_ONLINESHOPPINGCART_P1_ITEMTOPURCHASETEST_H
