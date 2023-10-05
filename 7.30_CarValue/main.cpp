//
// Created by Andrew Suyer
// 7.30 Car value
//

#include <iostream>

#include "Car.h"

using namespace std;

int main()
{
    // User input trackers:
    int userYear;
    int userPrice;
    int userCurrentYear;

    Car myCar;

    cout << "Please enter the model year, model price, and the current year all on seperate lines:" << endl;
    cin >> userYear;
    cin >> userPrice;
    cin >> userCurrentYear;

    myCar.SetModelYear(userYear);
    myCar.SetPurchasePrice(userPrice);
    myCar.CalcCurrentValue(userCurrentYear);

    myCar.PrintInfo();
    return 0;
}
