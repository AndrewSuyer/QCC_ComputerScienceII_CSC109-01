/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 11 Exam
 */

#ifndef CH11EXAM_SHOPPINGBAGSTEST_H
#define CH11EXAM_SHOPPINGBAGSTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "ShoppingBags.h"

class ShoppingBagsTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        ShoppingBags s(3);
        std::vector<Item> items = {
            Item("Item1", 10.0),
            Item("Item2", 15.0),
            Item("Item3", 5.0),
            Item("Item4", 8.0),
            Item("Item5", 12.0)
        };

        std::vector<std::vector<Item>> allBags = s.ShoppingBagCombinations(std::vector<Item>(), items);

        std::string str = s.to_string(allBags);


        ShoppingBags s2(0);
        std::vector<std::vector<Item>> bags2 = s2.ShoppingBagCombinations(std::vector<Item>(), std::vector<Item>());
        TS_ASSERT(bags2.empty())

    }

};


#endif // CH11EXAM_SHOPPINGBAGSTEST_H
