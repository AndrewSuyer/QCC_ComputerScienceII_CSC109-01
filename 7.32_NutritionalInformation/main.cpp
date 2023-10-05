/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.32 Nutritional information
 */

#include <iostream>

#include <iostream>
#include <iomanip>

#include "FoodItem.h"

using namespace std;

int main() {

    // User input trackers:
    string itemName;
    double amountFat, amountCarbs, amountProtein;
    double numServings;
    cout << fixed << setprecision(2);

    cin >> itemName;

    // Use default constructor if user inputs "Water"
    if(itemName == "Water" || itemName == "water") {
        FoodItem foodItem;
        foodItem.PrintInfo();
        cout << fixed << setprecision(2);
        cout << "Number of calories for " << 1.0 << " serving(s): " << foodItem.GetCalories(1.0) << endl;
    }

    // Get inputs for all attributes otherwise
    else {
        cin >> amountFat;
        cin >> amountCarbs;
        cin >> amountProtein;
        cin >> numServings;

        FoodItem foodItem = FoodItem(itemName, amountFat, amountCarbs, amountProtein);
        foodItem.PrintInfo();
        cout << "Number of calories for " << 1.0 << " serving(s): "
             << foodItem.GetCalories(1.0) << endl;
        cout << "Number of calories for " << numServings << " serving(s): "
             << foodItem.GetCalories(numServings) << endl;
    }

    return 0;
}
