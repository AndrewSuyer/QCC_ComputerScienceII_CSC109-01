/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_ITEMS_ITEM_H
#define INHERITANCE_ITEMS_ITEM_H


#include <string>

/// A base class for an Item that you would find in a store. Base item has a name and quantity
class Item
{
    std::string name;
    int quantitiy;

public:

    explicit Item(const std::string& name = "", int quantity = 0);

    const std::string &getName() const;
    void setName(const std::string &name);

    int getQuantitiy() const;
    void setQuantitiy(int quantitiy);

    /// Prints this item's information. Doesnt not end with new line character.
    /// THIS METHOD IS NOT VIRTUAL
    void print() const;

    /// Prints this item's information. Doesnt not end with new line character.
    /// THIS METHOD IS VIRTUAL
    virtual void virtualPrint() const;

};


#endif // INHERITANCE_ITEMS_ITEM_H
