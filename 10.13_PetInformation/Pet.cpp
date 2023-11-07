/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.13 Pet information
 */


#include <iostream>
#include "Pet.h"

void Pet::SetName(const std::string& userName) {
    petName = userName;
}


const std::string& Pet::GetName() {
    return petName;
}


void Pet::SetAge(int userAge) {
    petAge = userAge;
}


int Pet::GetAge() {
    return petAge;
}


void Pet::PrintInfo() {
    std::cout << "Pet Information: " << std::endl;
    std::cout << "   Name: " << petName << std::endl;
    std::cout << "   Age: " << petAge << std::endl;
}
