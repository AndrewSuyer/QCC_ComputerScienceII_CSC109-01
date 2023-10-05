/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.32 Nutritional information
 */

#include "FoodItem.h"

#include <iostream>
#include <iomanip>

// Define default constructor
FoodItem::FoodItem() :
    name("Water"), fat(0.0), carbs(0.0), protein(0.0)
{

}

// Define second constructor with parameters
// to initialize private data members
FoodItem::FoodItem(const std::string& aName, double aFat, double aCarbs, double aProtein) :
    name(aName), fat(aFat), carbs(aCarbs), protein(aProtein)
{

}

const std::string& FoodItem::GetName() {
    return name;
}

double FoodItem::GetFat() {
    return fat;
}

double FoodItem::GetCarbs() {
    return carbs;
}

double FoodItem::GetProtein() {
    return protein;
}

double FoodItem::GetCalories(double numServings) {
    // Calorie formula
    double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
    return calories;
}


void FoodItem::PrintInfo() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nutritional information per serving of " << name  << ":" << std::endl;
    std::cout << "  Fat: " << fat << " g" << std::endl;
    std::cout << "  Carbohydrates: " << carbs << " g" << std::endl;
    std::cout << "  Protein: " << protein << " g" << std::endl;
}
