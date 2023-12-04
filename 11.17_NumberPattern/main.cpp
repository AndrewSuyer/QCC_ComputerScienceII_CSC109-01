#include <iostream>

using namespace std;


/**
 * Prints the following pattern: \n
 * n1 (n1-n2) (n1-n2-n2) ... until a negative number is reached.
 * Then, it reverses the pattern until n1 is reached again.
 * @param n1
 * @param n2
 */
void PrintNumPattern(int n1, int n2)
{
    cout << n1 << ' ';

    // Recursive case:
    // Print next number if current is positive, then print current number again
    if (n1 >= 0)
    {
        PrintNumPattern(n1 - n2, n2);
        cout << n1 << ' ';
    }

    // Base case: number is negative (stop recursion)
}

int main()
{
    int num1;
    int num2;

    cout << "Enter 2 numbers: ";

    cin >> num1;
    cin >> num2;
    PrintNumPattern(num1, num2);

    return 0;
}
