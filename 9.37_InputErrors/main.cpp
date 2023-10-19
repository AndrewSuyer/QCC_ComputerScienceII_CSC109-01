#include <iostream>

/*
 * This lab WILL NOT WORK here. It is dependent on zyLabs interpreter.
 * Throws an exception if number of inputs isn't 3
 */

int main()
{
    std::cin.exceptions(std::ios::failbit); // Allow cin to throw exceptions
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    int max = 0;
    int valCount = 0;

    try
    {
        std::cin >> val1;       ++valCount;
        std::cin >> val2;       ++valCount;
        std::cin >> val3;       ++valCount;

        // Find max value
        if (val1 > val2)
        {
            if (val1 > val3)
                max = val1;
            else
                max = val3;
        }
        else
        {
            if (val2 > val3)
                max = val2;
            else
                max = val3;
        }

        std::cout << max << std::endl;
    }
    catch (const std::ios_base::failure& e)
    {
        // Find max value
        if (val1 > val2)
        {
            if (val1 > val3)
                max = val1;
            else
                max = val3;
        }
        else
        {
            if (val2 > val3)
                max = val2;
            else
                max = val3;
        }

        std::cout << valCount << " input(s) read:" << std::endl;
        if (valCount == 0)
            std::cout << "No max" << std::endl;
        else
            std::cout << "Max is " << max << std::endl;
    }

    return 0;
}
