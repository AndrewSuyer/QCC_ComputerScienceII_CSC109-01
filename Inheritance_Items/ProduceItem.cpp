/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include <iostream>
#include "ProduceItem.h"


// Explicitly calls the Item constructor with arguments (MUST be in initializer)
ProduceItem::ProduceItem(const std::string &name, int quantity, const std::string &experationDate) :
    Item(name, quantity), experationDate(experationDate)
{}


const std::string &ProduceItem::getExperationDate() const
{
    return experationDate;
}


void ProduceItem::setExperationDate(const std::string &experationDate)
{
    ProduceItem::experationDate = experationDate;
}


// Overrides the print() function of Item. Objects of type ProduceItem will call this function
void ProduceItem::print() const
{
    Item::print();
    std::cout << ", expires: " << experationDate;
}


// Notice: virtual and override keywords are left out in implementation
void ProduceItem::virtualPrint() const
{
    Item::virtualPrint();
    std::cout << ", expires: " << experationDate;
}


