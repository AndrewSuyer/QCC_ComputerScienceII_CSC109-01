#include <iostream>
#include <stdexcept>

/*
 * Try to get 2 integers from input and perform division on them.
 * Catch an error from std::cin if input type isn't an int.
 * Throw and Catch a runtime_error if divNum is zero
 */

int main()
{
    int userNum;
    int divNum;
    int result;
    std::cin.exceptions(std::ios::failbit);       // Allow cin to throw exceptions

    try
    {
        std::cin >> userNum >> divNum;

        if (divNum == 0)
            throw std::runtime_error("Divide by zero!");

        std::cout << userNum / divNum << std::endl;
    }
    catch (const std::ios_base::failure& e)
    {
        std::cout << "Input Exception: " << e.what() << std::endl;
    }
    catch (const std::runtime_error& e)
    {
        std::cout << "Runtime Exception: " << e.what() << std::endl;
    }

    return 0;
}
