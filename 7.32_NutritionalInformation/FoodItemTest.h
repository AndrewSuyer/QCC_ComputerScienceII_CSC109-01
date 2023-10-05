/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.32 Nutritional information
 */

//

#ifndef INC_7_32_NUTRITIONALINFORMATION_FOODITEMTEST_H
#define INC_7_32_NUTRITIONALINFORMATION_FOODITEMTEST_H

#include <cxxtest/TestSuite.h>

//Include your classes header file(s) below and uncomment.
#include "FoodItem.h"


class FoodItemTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)
    FoodItem foodItem;
    FoodItem testDefaultConstructor;

public:

    FoodItemTest() : foodItem("Pizza", 100, 100, 100)
    {}

    // All tests should start with the word 'test' followed by
    // the name of the function being tested. CxxTest will automatically
    // test all functions beginning with 'test'
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGetName()
    {
        TS_ASSERT_EQUALS(foodItem.GetName(), "Pizza");
    }

    void testGetFat()
    {
        TS_ASSERT_EQUALS(foodItem.GetFat(), 100.0);
    }

    void testGetCarbs()
    {
        TS_ASSERT_EQUALS(foodItem.GetCarbs(), 100.0);
    }

    void testGetProtein()
    {
        TS_ASSERT_EQUALS(foodItem.GetProtein(), 100.0);
    }

    void testGetCalories()
    {
        double servings = 10;
        double calories = (100 * 9 + 100 * 4 + 100 * 4) * servings;
        TS_ASSERT_EQUALS(foodItem.GetCalories(servings), calories);
    }

    void testPrintInfo()
    {
        foodItem.PrintInfo();
    }

};


#endif //INC_7_32_NUTRITIONALINFORMATION_FOODITEMTEST_H
