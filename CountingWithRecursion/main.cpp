#include <iostream>
#include <string>
#include <cassert>
#include <vector>

/*
 * A collection of functions that add things using TAIL RECURSION.
 *  Tail recursion is when the last statement of a function is a recursive call.
 * They consist of a RECURSIVE COUNTER which adds things without using a counter parameter.
 */


/**
 * Counts the number of words in the string using TAIL RECURSION
 * @param paragraph - Paragraph to count words in
 * @return Number of words in the paragraph.
 */
int countWord(const std::string& paragraph);

/**
 * Returns the sum of all the digits of n
 * @param n - Number to add the digits in
 * @return Sum of all the digits of n
 */
int sum(int n);

/**
 * Returns the number of english letters in the string. Letters (A-Z) and (a-z).
 * @param str - String to count letters in
 * @return
 */
int countEnglishLetters(const std::string& str);

/**
 * Returns the sum of all the numbers on the array
 * @param arr - Numbers to sum
 * @param size - Size of the array
 * @return Sum of numbers in arr
 */
int sum(int arr[], unsigned int size);

/**
 * Returns the sum of all the numbers in the vector
 * @param vec - Numbers to sum
 * @return The sum of numbers in vec
 */
int sum(std::vector<int> vec);




int main()
{
//    std::string paragraph;
//    std::cout << "Enter some words\n";
//    std::getline(std::cin, paragraph);
//    std::cout << countWord(paragraph);

    assert(sum(1234) == 10);
    assert(sum(100983) == 21);
    assert(sum(98701) == 25);
    assert(sum(560) == 11);

    assert(countEnglishLetters("ABCDE") == 5);
    assert(countEnglishLetters("A$N8HD") == 4);
    assert(countEnglishLetters("0o98n1") == 2);

    int nums1[5] = {1, 3, 5, 7, 9};
    assert(sum(nums1, 5) == 25);

    std::vector<int> nums2{2, 4, 6, 8, 10};
    assert(sum(nums2) == 30);

    return 0;
}


int countWord(const std::string& paragraph)
{
    // Base case:
    // End of the paragraph
    if (paragraph.empty())
        return 0;

    // Base case:
    // There is not another space in the string, so this is the last word
    else if (paragraph.find(' ') == std::string::npos)
        return 1;

    // Recursive case:
    // Remove word at the front of the string and call again.
    // Each call to the function represents a word in the paragraph
    else
    {
        u_int32_t pos = paragraph.find(' ');
        return 1 + countWord(paragraph.substr(pos + 1));
    }
}

int sum(int n)
{
    // Base case:
    // End of number
    if (n == 0)
    {
        return 0;
    }

    // Recursive case:
    // Add last digit to the next last digit to the next last digit ...
    return (n % 10) + sum(n / 10);
}

int countEnglishLetters(const std::string& str)
{
    // Base case:
    // end of string
    if (str.empty())
        return 0;

    // Recursive case:
    // Current character is an english letter: add 1 to recursive counter, remove front character and send again
    else if ((str.front() >= 65 && str.front() <= 90) || (str.front() >= 97 && str.front() <= 122))
        return 1 + countEnglishLetters(str.substr(1));

    // Recursive case:
    // Current character is NOT an english letter: remove front character and send again
    else
        return countEnglishLetters(str.substr(1));
}

int sum(int arr[], unsigned int size)
{
    // Base case:
    // At the end of the array
    if (size == 0)
    {
        return 0;
    }

    // Recursive case:
    // Add last array element to recursive counter. Send again with a smaller array size
    return arr[size - 1] + sum(arr, size - 1);
}

int sum(std::vector<int> vec)
{
    // Base case:
    // At the end of the list
    if (vec.empty())
        return 0;

    // Recursive case:
    // Add last element to the recursive counter. Send vec again with last element removed
    int back = vec.back();
    vec.pop_back();
    return back + sum(vec);
}
