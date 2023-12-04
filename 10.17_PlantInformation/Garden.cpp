/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */


#include <iostream>
#include <stdexcept>
#include "Garden.h"


Garden::~Garden()
{
    for (auto i = plants.begin(); i < plants.end(); ++i)
    {
        delete *i;
    }
}


void Garden::Add(Plant &p)
{
    auto* plant = new Plant(p);
    plants.push_back(plant);
}


void Garden::Remove(const Plant &p)
{
    for (auto i = plants.begin(); i < plants.end(); ++i)
    {
        if (**i == p)
        {
            delete *i;
            plants.erase(i);
            return;
        }
    }

    throw std::runtime_error("Plant not found in this Garden");
}


void Garden::PrintInfo() const
{
    std::cout << "Printing garden:\n";
    for (size_t i = 0; i < plants.size(); ++i)
    {
        std::cout << (i + 1) << ":\n";
        plants[i]->PrintInfo();
    }
}


bool Garden::Contains(const Plant &p) const
{
    for (auto i = plants.begin(); i < plants.end(); ++i)
    {
        if (**i == p)
        {
            return true;
        }
    }

    return false;
}
