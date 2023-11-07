/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.13 Pet information
 */

#ifndef INC_10_13_PETINFORMATION_CAT_H
#define INC_10_13_PETINFORMATION_CAT_H

#include "Pet.h"

#include <string>

using std::string;          // in order to make instructor tests pass

class Cat : public Pet
{
    std::string catBreed;

public:

    void SetBreed(const std::string& userBreed);

    const std::string& GetBreed();

    void PrintInfo();
};


#endif // INC_10_13_PETINFORMATION_CAT_H
