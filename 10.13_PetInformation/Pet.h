/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.13 Pet information
 */

#ifndef INC_10_13_PETINFORMATION_PET_H
#define INC_10_13_PETINFORMATION_PET_H

#include <string>


class Pet
{
protected:

    std::string petName;
    int petAge;

public:

    void SetName(const std::string& userName);

    const std::string& GetName();

    void SetAge(int userAge);

    int GetAge();

    void PrintInfo();
};

#endif // INC_10_13_PETINFORMATION_PET_H
