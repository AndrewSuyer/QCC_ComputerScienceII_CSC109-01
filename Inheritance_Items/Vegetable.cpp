/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include <iostream>
#include "Vegetable.h"


Vegetable::Vegetable(const std::string &name, int quantity, const std::string experationDate, int leafCount) :
    ProduceItem(name, quantity, experationDate), leafCount(leafCount)
{}


int Vegetable::getLeafCount() const
{
    return leafCount;
}


void Vegetable::setLeafCount(int leafCount)
{
    this->leafCount = leafCount;
}


void Vegetable::print() const
{
    ProduceItem::print();
    std::cout << ", leaf count: " << leafCount;
}


void Vegetable::virtualPrint() const
{
    ProduceItem::virtualPrint();
    std::cout << ", leaf count: " << leafCount;
}
