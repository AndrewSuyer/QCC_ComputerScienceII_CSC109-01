/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.30 Car value
 */

#ifndef INC_7_30_CARVALUE_CAR_H
#define INC_7_30_CARVALUE_CAR_H


class Car
{
private:
    int modelYear;
    int purchasePrice;
    double currentValue;

public:

    /// Sets this cars model year
    /// @param userYear model year
    void SetModelYear(int userYear);


    /// @returns This cars model year
    int GetModelYear() const;


    /// Sets the purchase price of this car
    /// @param price price of this car
    void SetPurchasePrice(int price);


    /// @returns The purchase price of this car
    int GetPurchasePrice() const;


    /// Modifies the current value of the car based on the current year
    void CalcCurrentValue(int currentYear);


    double GetCurrentValue() const;


    /// Prints information about this car. This includes the model year, purchase price,
    /// and the current value
    void PrintInfo() const;
};

#endif //INC_7_30_CARVALUE_CAR_H
