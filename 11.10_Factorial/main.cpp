#include <iostream>

namespace recursive
{
    unsigned int factorial(unsigned int n)
    {
        // Computes n * (n-1) * (n-2) * ... * 1

        if (n == 0)
            return 1;

        return n * factorial(n - 1);
    }
}

namespace loop
{
    unsigned int factorial(unsigned int n)
    {
        // Computes n * (n-1) * (n-2) * ... * 1
        // i is a placeholder for (n-1), (n-2), ...

        unsigned int product = n;
        for (unsigned int i = product; i > 0; --i)
        {
            product *= i;
        }
        return product;
    }
}

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Recursive loop: " << num << "! = " << recursive::factorial(num) << '\n';
    std::cout << "For loop: " << num << "! = " << loop::factorial(num) << '\n';

    return 0;
}
