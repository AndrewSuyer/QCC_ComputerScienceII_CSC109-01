/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */


#ifndef INC_10_17_PLANTINFORMATION_GARDEN_H
#define INC_10_17_PLANTINFORMATION_GARDEN_H

#include "Plant.h"
#include <vector>

/**
 * Stores Plant objects in a vector
 */
class Garden
{
    std::vector<Plant*> plants;

public:

    Garden() = default;
    ~Garden();

    void Add(Plant& p);
    void Remove(const Plant& p);

    void PrintInfo() const;

    bool Contains(const Plant& p) const;

};


#endif // INC_10_17_PLANTINFORMATION_GARDEN_H
