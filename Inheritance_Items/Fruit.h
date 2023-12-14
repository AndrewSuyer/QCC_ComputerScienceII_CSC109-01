/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_ITEMS_FRUIT_H
#define INHERITANCE_ITEMS_FRUIT_H

#include "ProduceItem.h"

#include <string>

/// Fruits are ProduceItems that have seeds. Has all fields of ProduceItem plus a seed count
class Fruit : public ProduceItem
{
    int seedCount;

public:

    explicit
    Fruit(const std::string& name = "",
          int quantity = 0,
          const std::string& experationDate = "00/00/0000",
          int seedCount = 0);

    int getSeedCount() const;

    void setSeedCount(int seedCount);

    void print() const;

    virtual void
    virtualPrint() const override;

};


#endif // INHERITANCE_ITEMS_FRUIT_H
