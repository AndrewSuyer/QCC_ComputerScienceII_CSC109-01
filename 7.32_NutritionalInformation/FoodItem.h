/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.32 Nutritional information
 */

#ifndef INC_7_32_NUTRITIONALINFORMATION_FOODITEM_H
#define INC_7_32_NUTRITIONALINFORMATION_FOODITEM_H

#include <string>

class FoodItem
{
public:

    /// Default constructor: Gives default values for Water
    FoodItem();

    /// Second constructor: used to specify all attributes
    FoodItem(const std::string& aName, double aFat, double aCarbs, double aProtein);

    /// @returns the name of this food item
    const std::string& GetName();

    /// @returns the amount of fat in this food item
    double GetFat();

    /// @returns the amount of cabs in this food item
    double GetCarbs();

    /// @returns the amount of protein in this food item
    double GetProtein();

    /// Calculats and returns the amount of calories there are in a specified number of
    /// servings of this food item
    /// @param numServings number of servings
    /// @returns Calories
    double GetCalories(double numServings);

    /// Prints information about this food item. This includes the amount of fat, carbs, and
    /// protein
    void PrintInfo();

private:

    std::string name;
    double fat;
    double carbs;
    double protein;
};

#endif //INC_7_32_NUTRITIONALINFORMATION_FOODITEM_H
