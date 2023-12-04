/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 11 exam
 */


#include <sstream>
#include "ShoppingBags.h"


ShoppingBags::ShoppingBags(size_t max_item) :
    max_items_in_bag(max_item)
{}


vector<vector<Item>> ShoppingBags::ShoppingBagCombinations(vector<Item> currBag, vector<Item> remainingItems, std::vector<std::vector<Item>> allBags)
{
    if (max_items_in_bag == 0)
        return {};

    else if (currBag.size() == max_items_in_bag)
        allBags.push_back(currBag);

    else
        MoveItemHelper(0, remainingItems.size(), currBag, remainingItems, allBags);

    return allBags;
}


void ShoppingBags::MoveItemHelper(int iterator, int limit, std::vector<Item> currBag, std::vector<Item> remainingItems, std::vector<std::vector<Item>>& allBags)
{
    if (iterator == limit)
        return;

    Item temp = remainingItems.at(iterator);

    remainingItems.erase(remainingItems.begin() + iterator);
    currBag.push_back(temp);

    allBags = ShoppingBagCombinations(currBag, remainingItems, allBags);

    currBag.pop_back();
    remainingItems.insert(remainingItems.begin() + iterator, temp);

    MoveItemHelper(iterator + 1, limit, currBag, remainingItems, allBags);
}


string ShoppingBags::to_string(const vector<vector<Item>> &bags, size_t index) const
{
    if (index == bags.size())
        return "";

    return bag_to_string(bags.at(index)) + to_string(bags, index + 1);
}


std::string ShoppingBags::bag_to_string(std::vector<Item> bag, size_t index) const
{
    if (index == bag.size())
    {
        double price = priceOf(bag);
        std::ostringstream oss;
        oss << "= Total Price: $" << price << '\n';

        return oss.str();
    }


    std::ostringstream oss;
    oss << bag.at(index);

    return oss.str() + " " + bag_to_string(bag, index + 1);
}


double ShoppingBags::priceOf(std::vector<Item> bag, size_t index) const
{
    if (index == bag.size())
        return 0;

    return bag.at(index).getPrice() + priceOf(bag, index + 1);
}
