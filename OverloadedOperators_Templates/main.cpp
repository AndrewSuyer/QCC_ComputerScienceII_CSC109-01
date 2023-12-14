#include <iostream>
#include "Account.h"


int main()
{
    Account<double> a1(123, 10250.25);

    a1 += 25;           // 10275.25
    a1 -= 275.25;       // 10000.00
    std::cout << a1 << '\n';

    Account<double> a2(321, 5000);

    if (a1 > a2)
        std::cout << "a1 > a2\n";
    else
        std::cout << "a2 >= a1\n";

    Account<double> a3 = a1;

    if (a1 == a3)
        std::cout << "a1 == a3\n";
    else
        std::cout << "a1 != a3\n";


    Account<double> a4 = a1 + a2;
    std::cout << a4 << '\n';
    std::cout << a4 - a3 << '\n';

    return 0;
}
