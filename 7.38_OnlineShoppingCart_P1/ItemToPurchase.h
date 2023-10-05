/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.38 Online shopping cart (part 1)
 */

#ifndef INC_7_38_ONLINESHOPPINGCART_P1_ITEMTOPURCHASE_H
#define INC_7_38_ONLINESHOPPINGCART_P1_ITEMTOPURCHASE_H

#include <string>

class ItemToPurchase
{
public:

    /// Default constructor: "none", "none", 0, 0
    ItemToPurchase();

    /// Parameterized constructor:
    ItemToPurchase(const std::string& name, const std::string& description, int price = 0, int quantity = 0);


    /// Sets item name
    /// @param name item name
    void SetName(const std::string& name);

    /// @returns Item name
    const std::string& GetName() const;


    /// Sets item description
    /// @param descrition item description
    void SetDescription(const std::string& descrition);

    /// @returns Item description
    const std::string& GetDescription() const;


    /// Sets item price
    /// @param price item price
    void SetPrice(int price);

    /// @returns Item price
    int GetPrice() const;


    /// Sets item quantity
    /// @param quantity item quantity
    void SetQuantity(int quantity);

    /// @returns item quantity
    int GetQuantity() const;


    /// Prints the cost of this item which is the product of its price and quantity
    void PrintItemCost() const;

    /// Prints this items description
    void PrintItemDescription() const;

private:

    std::string itemName;
    std::string itemDescription;
    int itemPrice;
    int itemQuantity;

};


#endif // INC_7_38_ONLINESHOPPINGCART_P1_ITEMTOPURCHASE_H
