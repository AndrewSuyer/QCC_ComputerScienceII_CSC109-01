/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_ITEMS_VEGETABLE_H
#define INHERITANCE_ITEMS_VEGETABLE_H

#include "ProduceItem.h"

/// Vegetables are ProduceItems that have leafs. Has all fields of ProduceItem plus a leaf count
class Vegetable : public ProduceItem
{
    int leafCount;

public:

    explicit
    Vegetable(const std::string& name = "",
              int quantity = 0,
              const std::string experationDate = "00/00/0000",
              int leafCount = 0);

    int getLeafCount() const;
    void setLeafCount(int leafCount);

    void print() const;

    virtual void virtualPrint() const override;

};


#endif // INHERITANCE_ITEMS_VEGETABLE_H
