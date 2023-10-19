#include <iostream>
#include <iomanip>
#include <stdexcept>

/*
 * Get number of steps from input.
 * Try to use SetToMiles function to convert steps into miles and print.
 * Catch runtime_error from function call if steps is negative
 */

double StepsToMiles(int steps)
{
    if (steps < 0)
    {
        throw std::runtime_error("Exception: Negative step count entered.");
    }

    // 2000 steps per mile
    return steps / 2000.0;
}

int main()
{
    // Get user input
    int steps = 0;
    std::cin >> steps;

    try
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << StepsToMiles(steps) << std::endl;
    }
    catch (const std::runtime_error& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
