/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include "Item.h"
#include <ostream>


Item::Item(const std::string &name, int price) :
    itemName(name), priceDollars(price)
{}


std::ostream& operator<<(std::ostream &out, const Item& i)
{
    out << i.itemName;
    return out;
}


bool Item::operator==(const Item &i) const
{
    return this->itemName == i.itemName &&
            this->priceDollars == i.priceDollars;
}
