/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.30 Car value
 */


#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>

//Include your classes header file(s) below and uncomment.
#include "Car.h"


class newCxxTest : public CxxTest::TestSuite {
private:

   Car car;

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested. CxxTest will automatically
    // test all functions beginning with 'test'
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.


    void testGetModelYear()
    {
        car.SetModelYear(1980);
        int modelYear = car.GetModelYear();
        TS_ASSERT_EQUALS(modelYear, 1980);
    }

    void testGetPurchasePrice()
    {
        car.SetPurchasePrice(18000);
        int purchasePrice = car.GetPurchasePrice();
        TS_ASSERT_EQUALS(purchasePrice, 18000);
    }

    void testPrintInfo()
    {
        car.SetPurchasePrice(18000);
        car.SetModelYear(1980);
        car.PrintInfo();
    }

    void testCalcCurrentValue()
    {
        car.SetPurchasePrice(18000);
        car.SetModelYear(1980);
        car.CalcCurrentValue(2023);
        double currentValue = car.GetCurrentValue();
        TS_ASSERT_EQUALS(currentValue, 18000 * pow(1-0.15, 2023-1980));
    }

};

#endif /* NEWCXXTEST_H */
