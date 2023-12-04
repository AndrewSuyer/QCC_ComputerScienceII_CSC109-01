#include <iostream>

/**
   Find the sum of an array of numbers up to a given index.
   @param a the array of numbers
   @param n the ending index
   @return the sum
*/
int sum(int a[], int n)
{
    // Base case: first element in the array
    if (n == 0)
        return a[0];

    // Recursive case: add current element to the one before
    return a[n] + sum(a, n -1);
}


int main()
{
    int* nums;          // dynamic array
    int size = 0;       // array size
    int num = 0;        // user input

    // Get user input:
    std::cout << "Enter a number for how many elements you want in the array: ";
    std::cin >> size;
    nums = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> num;
        nums[i] = num;
        std::cout << "The element is: " << num << '\n';
    }

    std::cout << "The sum is: " << sum(nums, size) << '\n';

    return 0;
}
