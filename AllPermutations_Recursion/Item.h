/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef ALLPERMUTATIONS_RECURSION_ITEM_H
#define ALLPERMUTATIONS_RECURSION_ITEM_H

#include <string>
#include <ostream>

class Item
{
public:
    std::string itemName;   // Name of item
    int priceDollars;       // Price of item

    Item(const std::string& name = "", int price = 0);

    friend std::ostream& operator<<(std::ostream& out, const Item& i);

    bool operator==(const Item& i) const;

};


#endif // ALLPERMUTATIONS_RECURSION_ITEM_H
