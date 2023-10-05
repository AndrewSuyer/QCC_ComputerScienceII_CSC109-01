/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.38 Online shopping cart (part 1)
 */

#include "ItemToPurchase.h"

#include <iostream>

ItemToPurchase::ItemToPurchase() :
    itemName("none"), itemDescription("none"), itemPrice(0), itemQuantity(0)
{}


ItemToPurchase::ItemToPurchase(const std::string& name, const std::string& description, int price, int quantity) :
    itemName(name), itemDescription(description), itemPrice(price), itemQuantity(quantity)
{}


void ItemToPurchase::SetName(const std::string& name)
{
    itemName = name;
}


const std::string& ItemToPurchase::GetName() const
{
    return itemName;
}


void ItemToPurchase::SetDescription(const std::string& descrition)
{
    itemDescription = descrition;
}


const std::string& ItemToPurchase::GetDescription() const
{
    return itemDescription;
}


void ItemToPurchase::SetPrice(int price)
{
    itemPrice = price;
}


int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}


void ItemToPurchase::SetQuantity(int quantity)
{
    itemQuantity = quantity;
}


int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}


void ItemToPurchase::PrintItemCost() const
{
    std::cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $"
        << itemQuantity * itemPrice << std::endl;
}


void ItemToPurchase::PrintItemDescription() const
{
    std::cout << itemName << ": " << itemDescription << std::endl;
}
