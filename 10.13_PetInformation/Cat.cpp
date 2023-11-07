/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.13 Pet information
 */

#include "Cat.h"

#include <iostream>

using std::string;

void Cat::SetBreed(const std::string& userBreed) {
    catBreed = userBreed;
}


const std::string& Cat::GetBreed() {
    return catBreed;
}


void Cat::PrintInfo()
{
    Pet::PrintInfo();
    std::cout << "   Breed: " << catBreed << std::endl;
}
