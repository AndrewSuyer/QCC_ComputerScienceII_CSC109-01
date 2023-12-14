/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include <iostream>
#include "Fruit.h"


Fruit::Fruit(const std::string &name, int quantity, const std::string &experationDate, int seedCount) :
    ProduceItem(name, quantity, experationDate), seedCount(seedCount)
{}


int Fruit::getSeedCount() const
{
    return seedCount;
}


void Fruit::setSeedCount(int seedCount)
{
    Fruit::seedCount = seedCount;
}


void Fruit::print() const
{
    ProduceItem::print();
    std::cout << ", seed count: " << seedCount;
}


void Fruit::virtualPrint() const
{
    ProduceItem::virtualPrint();
    std::cout << ", seed count: " << seedCount;
}
