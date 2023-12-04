/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */


#include "Plant.h"
#include <iostream>

Plant::~Plant() {};

void Plant::SetPlantName(const std::string& userPlantName) {
    plantName = userPlantName;
}

const std::string& Plant::GetPlantName() const {
    return plantName;
}

void Plant::SetPlantCost(int userPlantCost) {
    plantCost = userPlantCost;
}

int Plant::GetPlantCost() const {
    return plantCost;
}

void Plant::PrintInfo() const {
    std::cout << "   Plant name: " << plantName << std::endl;
    std::cout << "   Cost: " << plantCost << std::endl;
}


bool Plant::operator==(const Plant &p) const
{
    return plantName == p.plantName &&
            plantCost == p.plantCost;
}


std::ostream &operator<<(std::ostream &out, const Plant &p)
{
    out << "   Plant name: " << p.plantName << std::endl;
    out << "   Cost: " << p.plantCost << std::endl;
    return out;
}
