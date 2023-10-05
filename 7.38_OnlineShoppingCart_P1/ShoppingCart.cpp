/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.38 Online shopping cart
 */


#include <iostream>
#include "ShoppingCart.h"


ShoppingCart::ShoppingCart() :
    customerName("none"), currentDate("January 1, 2016"), cartItems(0)
{

}


ShoppingCart::ShoppingCart(const std::string &customerName, const std::string &currentDate) :
    customerName(customerName), currentDate(currentDate), cartItems(0)
{

}


const std::string &ShoppingCart::GetCustomerName() const
{
    return customerName;
}


const std::string &ShoppingCart::GetDate()
{
    return currentDate;
}


void ShoppingCart::AddItem(const ItemToPurchase &itemToPurchase)
{
    cartItems.push_back(itemToPurchase);
}


void ShoppingCart::RemoveItem(const std::string &itemName)
{
    bool itemFound = false;
    for (auto i = cartItems.begin(); i < cartItems.end(); ++i)
    {
        if (i->GetName() == itemName)
        {
            cartItems.erase(i);
            itemFound = true;
            break;
        }
    }

    if (!itemFound)
    {
        std::cout << "Item not found in cart. Nothing removed." << std::endl;
    }

    std::cout << std::endl;
}


void ShoppingCart::ModifyItem(const ItemToPurchase &itemToPurchase)
{
    bool itemFound = false;
    // Search for item in cart:
    for (auto i = cartItems.begin(); i < cartItems.end(); ++i)
    {
        // if matching item (name) is in cart:
        if (i->GetName() == itemToPurchase.GetName())
        {
            itemFound = true;
            ItemToPurchase defaultItem;

            // Modify attributes that are not that of a default item
            if (itemToPurchase.GetDescription() != defaultItem.GetDescription())
            {
                i->SetDescription(itemToPurchase.GetDescription());
            }

            if (itemToPurchase.GetPrice() != defaultItem.GetPrice())
            {
                i->SetPrice(itemToPurchase.GetPrice());
            }

            if (itemToPurchase.GetQuantity() != defaultItem.GetQuantity())
            {
                i->SetQuantity(itemToPurchase.GetQuantity());
            }
        }
    }

    // Item not found in cart:
    if (!itemFound)
    {
        std::cout << "Item not found in cart. Nothing modified." << std::endl
                    << std::endl;
    }
}


int ShoppingCart::GetNumItemsInCart() const
{
    int total = 0;
    for (auto i { cartItems.begin() }; i < cartItems.end(); ++i)
        total += i->GetQuantity();
    return total;
}


int ShoppingCart::GetCostOfCart() const
{
    int sum = 0;
    for (auto i { cartItems.begin() }; i < cartItems.end(); ++i)
        sum += (i->GetPrice() * i->GetQuantity());
    return sum;
}


void ShoppingCart::PrintTotal() const
{
    std::cout << customerName << "'s Shopping Cart - " << currentDate << std::endl;
    std::cout << "Number of Items: " << GetNumItemsInCart() << std::endl
                << std::endl;

    if (cartItems.empty())
    {
        std::cout << "SHOPPING CART IS EMPTY" << std::endl
                    << std::endl;
    }
    else
    {
        for (auto i = cartItems.begin(); i < cartItems.end(); ++i)
        {
            i->PrintItemCost();
        }
        std::cout << std::endl;
    }

    std::cout << "Total: $" << GetCostOfCart() << std::endl
                << std::endl;
}


void ShoppingCart::PrintDescriptions() const
{
    if (cartItems.empty())
    {
        std::cout << "SHOPPING CART IS EMPTY" << std::endl;
        return;
    }

    std::cout << customerName << "'s Shopping Cart - " << currentDate << std::endl
                << std::endl;

    std::cout << "Item Descriptions" << std::endl;
    for (auto i = cartItems.begin(); i < cartItems.end(); ++i)
    {
        i->PrintItemDescription();
    }

    std::cout << std::endl;
}
