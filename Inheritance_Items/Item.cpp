/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include <iostream>
#include "Item.h"


Item::Item(const std::string& name, int quantity) :
    name(name), quantitiy(quantity)
{}

const std::string &Item::getName() const
{
    return name;
}


void Item::setName(const std::string &name)
{
    Item::name = name;
}


int Item::getQuantitiy() const
{
    return quantitiy;
}


void Item::setQuantitiy(int quantitiy)
{
    Item::quantitiy = quantitiy;
}


void Item::print() const
{
    std::cout << name << " x" << quantitiy;
}


void Item::virtualPrint() const
{
    std::cout << name << " x" << quantitiy;
}
