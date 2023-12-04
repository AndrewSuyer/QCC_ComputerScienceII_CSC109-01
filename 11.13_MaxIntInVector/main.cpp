#include <iostream>
#include <vector>

/**
   Find the maximum value in a vector.
   @param values  a vector of values
   @return the maximum value
*/
int maximum(std::vector<int> values)
{
    // Base case: 1 element left in list
    if (values.size() == 1)
        return values.back();

    // Recursive case:
    // Compare current last element to the next last element
    // Compare A and B in {..., B, A}

    // Store and remove last element of values (current = A in the diagram above)
    int current = values.back();
    values.pop_back();              // Remove A from the list before sending it through again
    int next = maximum(values);     // Perform this process again for the shorter list

    // Compares current last element (A) to the next last element (B) and returns the greater one
    if (current > next)
        return current;
    else
        return next;
}


int main()
{
    std::vector<int> values;
    int valueCount = 0;
    int number;

    std::cout << "How many numbers do you want to enter? ";
    std::cin >> valueCount;

    for (int i = 0; i < valueCount; ++i)
    {
        std::cin >> number;
        std::cout << "The number you entered is: " << number << '\n';
        values.push_back(number);
    }

    std::cout << "The maximum is: " << maximum(values) << '\n';

    return 0;
}
