/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.38 Online shopping cart
 */


#ifndef INC_7_38_ONLINESHOPPINGCART_P1_SHOPPINGCART_H
#define INC_7_38_ONLINESHOPPINGCART_P1_SHOPPINGCART_H

#include "ItemToPurchase.h"

#include <string>
#include <vector>

class ShoppingCart
{
public:

    /// Default constructor: "none", "January 1, 2016"
    ShoppingCart();

    /// Parameterized constructor
    ShoppingCart(const std::string& customerName, const std::string& currentDate);


    /// @returns Customers name
    const std::string& GetCustomerName() const;

    /// @returns Current date
    const std::string& GetDate();


    /// Adds item to cart
    /// @param itemToPurchase item
    void AddItem(const ItemToPurchase& itemToPurchase);

    /// Removes item from cart with matching name
    /// @param itemName item name
    void RemoveItem(const std::string& itemName);

    /// Modifies the item with the matching name to the parameter to have the same attributes
    /// as the parameter as long as those values differ from the default values of an ItemToPurchase.
    /// If the parameter is ItemToPurchase("Chips", "none", 3, 2), then the item called "Chips"
    /// in the cart will set price and quantity to 3 and 2 respectively. Description doesnt
    /// change because "none" is the default value.
    void ModifyItem(const ItemToPurchase& itemToPurchase);


    /// @returns number of items in the cart
    int GetNumItemsInCart() const;

    /// @returns the combined cost of every item in the cart
    int GetCostOfCart() const;


    /// Prints the cost of each item in the cart then prints the total cost of all
    /// the items in the cost
    void PrintTotal() const;

    /// Prints the description of each item in the cart
    void PrintDescriptions() const;


private:

    std::string customerName;
    std::string currentDate;
    std::vector<ItemToPurchase> cartItems;

};


#endif // INC_7_38_ONLINESHOPPINGCART_P1_SHOPPINGCART_H
