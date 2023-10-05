/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.30 Car value
 */

#include "Car.h"

#include <iostream>
#include <iomanip>
#include <cmath>

void Car::SetModelYear(int userYear)
{
    modelYear = userYear;
}


int Car::GetModelYear() const
{
    return modelYear;
}


void Car::SetPurchasePrice(int price)
{
    purchasePrice = price;
}


int Car::GetPurchasePrice() const
{
    return purchasePrice;
}


void Car::CalcCurrentValue(int currentYear)
{
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;

    // Car depreciation formula
    currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}


void Car::PrintInfo() const
{
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Car's information:" << std::endl;
    std::cout << "  Model year: " << modelYear << std::endl;
    std::cout << "  Purchase price: $" << purchasePrice << std::endl;
    std::cout << "  Current value: $" << currentValue << std::endl;
}


double Car::GetCurrentValue() const
{
    return currentValue;
}
