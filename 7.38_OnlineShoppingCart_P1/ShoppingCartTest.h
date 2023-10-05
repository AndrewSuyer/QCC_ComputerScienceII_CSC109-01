/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.38 Online shopping cart
 */

#ifndef INC_7_38_ONLINESHOPPINGCART_P1_SHOPPINGCARTTEST_H
#define INC_7_38_ONLINESHOPPINGCART_P1_SHOPPINGCARTTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

class ShoppingCartTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)


public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGetters()
    {
        ShoppingCart defaultCart;
        ShoppingCart cart1("Andrew", "September 14, 2023");

        TS_ASSERT_EQUALS(defaultCart.GetCustomerName(), "none");
        TS_ASSERT_EQUALS(defaultCart.GetDate(), "January 1, 2016");
        TS_ASSERT_EQUALS(defaultCart.GetNumItemsInCart(), 0);

        TS_ASSERT_EQUALS(cart1.GetCustomerName(), "Andrew");
        TS_ASSERT_EQUALS(cart1.GetDate(), "September 14, 2023");
        TS_ASSERT_EQUALS(cart1.GetNumItemsInCart(), 0);
    }

    void testAddItems()
    {
        ShoppingCart cart;
        ItemToPurchase item("Chips", "Crunchy", 5, 2);
        cart.AddItem(item);

        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 2);

        cart.AddItem(ItemToPurchase("Water Bottles", "Drink", 1, 5));

        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 7);
    }

    void testRemoveItems()
    {
        ShoppingCart cart;
        cart.AddItem(ItemToPurchase("Chips", "Crunchy", 5, 2));
        cart.AddItem(ItemToPurchase("Water Bottles", "Drink", 1, 5));

        cart.RemoveItem("Soda");    // Prints "Item not found in cart. Nothing removed"
        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 7);

        cart.RemoveItem("Chips");   // removes Chips (2 things)
        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 5);
    }

    void testModifyItem()
    {
        ShoppingCart cart;
        cart.AddItem(ItemToPurchase("Chips", "Crunchy", 5, 2));
        cart.AddItem(ItemToPurchase("Water Bottles", "Drink", 1, 5));

        ItemToPurchase defaultItem;
        ItemToPurchase item("Water Bottles", "none");
        ItemToPurchase modifiedChips("Chips", "Salted", 6, 3);

        cart.ModifyItem(defaultItem);   // Prints "Item not found in cart. Nothing modified"

        cart.ModifyItem(item);          // Finds item but doesnt modify (default except for name)

        cart.ModifyItem(modifiedChips); // Modifies chips (quantity changes to 3)
        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 8);
    }

    void testPrinters()
    {
        ShoppingCart emptyCart;
        ShoppingCart cart;
        cart.AddItem(ItemToPurchase("Chips", "Crunchy", 5, 2));
        cart.AddItem(ItemToPurchase("Water Bottles", "Drink", 1, 5));

        emptyCart.PrintTotal();
        emptyCart.PrintDescriptions();
        cart.PrintTotal();
        cart.PrintDescriptions();
    }

};


#endif // INC_7_38_ONLINESHOPPINGCART_P1_SHOPPINGCARTTEST_H
