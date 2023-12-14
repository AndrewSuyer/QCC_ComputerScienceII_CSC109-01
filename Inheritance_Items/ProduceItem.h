/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_ITEMS_PRODUCEITEM_H
#define INHERITANCE_ITEMS_PRODUCEITEM_H

#include "Item.h"

/// A specific type of item that you would find in a grocery store. This type of item has an
/// experation date. ProduceItem's must be initialized with the fields of Item (using the provided
/// constructor)
class ProduceItem : public Item
{
    std::string experationDate;

public:

    explicit ProduceItem(const std::string& name = "", int quantity = 0, const std::string& experationDate = "00/00/0000");

    const std::string &getExperationDate() const;
    void setExperationDate(const std::string &experationDate);

    void print() const;

    /// Overrides Item::virtualPrint(). Prints item information and an experation date
    virtual void virtualPrint() const override;

};


#endif // INHERITANCE_ITEMS_PRODUCEITEM_H
