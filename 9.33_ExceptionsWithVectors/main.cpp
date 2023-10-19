#include <iostream>
#include <vector>
#include <stdexcept>

/*
 * Get index from user. Try to output element at that index.
 * If out_of_range exception is caught, print the error message from the vector, then
 * print the closes name (first if index < 0, last if index > 0)
 */

using std::vector;

int main()
{
    vector<std::string> names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny" };
    int index;

    std::cin >> index;

    try
    {
        std::cout << names.at(index) << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Exception! " << e.what() << std::endl;
        std::cout << "The closest name is: " << ((index > 0) ? names.at(9) : names.at(0)) << std::endl;
    }

    return 0;
}
