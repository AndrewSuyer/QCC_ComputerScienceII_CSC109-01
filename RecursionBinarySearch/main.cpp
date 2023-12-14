#include <iostream>

/**
 * Finds the index of a target value in an array between bounding indexes using a recursive algorithm. \n
 * The numbers array is searched between lowIndex and highIndex inclusive: [lowIndex, highIndex], so the provided
 * indices should not be greater than the size of the array. \n
 * This uses a binary search algorithm with O(log(n)) time complexity
 * @param numbers - Array to search
 * @param lowIndex - Bottom index of search
 * @param highIndex - Top index of search
 * @param target - Value to search for in numbers
 * @return Index of target in numbers, or -1 if target was not found
 *
 */
int findNumber(int numbers[], int lowIndex, int highIndex,  int target)
{
    int midIndex = (lowIndex + highIndex) / 2;

    // Base case: at index of target
    if (numbers[midIndex] == target)
        return midIndex;

    // Base case: target not found in the array
    else if (lowIndex == highIndex)
        return -1;

    // Recursive case: target is left of the index
    else if (target < numbers[midIndex])
        return findNumber(numbers, lowIndex, midIndex, target);

    // Recursive case: target is right of the index
    else
        return findNumber(numbers, midIndex + 1, highIndex, target);
}


/**
 * Binary search demonstration: finds the target 'number' between lowVal and highVal
 * @param number - Target number
 * @param lowVal - Bottom of range
 * @param highVal - Top of range
 */
void findNumber(int number, int lowVal, int highVal)
{
    using namespace std;
    int midVal;

    midVal = (highVal + lowVal) / 2;
    cout << number;
    cout << " ";
    cout << midVal;

    if (number == midVal) {
        cout << " g" << endl;
    }
    else {
        if (number < midVal) {
            cout << " h" << endl;
            findNumber(number, lowVal, midVal);
        }
        else {
            cout << " i" << endl;
            findNumber(number, midVal + 1, highVal);
        }
    }
}

int main()
{
    int nums[10] {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int nums2[2] {0, 2};
    int index = findNumber(nums2, 0, 1, 0);

    std::cout << index << '\n';


    return 0;
}
