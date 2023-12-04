#include <iostream>

/**
   Attempts to locate substring t within string s.
   @param s a string
   @param t a string
   @param n the number of characters previously matched
   @return offset index of first match; otherwise, -1 if not found
*/
int index_of_helper(const std::string& s, const std::string& t, int n)
{
    // Base case: section of s between [n, n + t.length] equals t, so index of t within s is n
    if (s.substr(n, t.length()) == t)
        return n;

    // Base case: reached the end of s, t was not found
    if (n == (s.length() - t.length()))
        return -1;

    // Recursive case: check at another
    return index_of_helper(s, t, n + 1);
}

/**
   Attempts to locate substring t within string s.
   @param s a string
   @param t a string
   @return index of first match; otherwise, -1 if not found
*/
int index_of(const std::string& s, const std::string& t)
{
    // Call the helper function here
    return index_of_helper(s, t, 0);
}

int main()
{
    std::string s1, s2;

    // Get input:
    std::cout << "Enter the first string: ";
    std::getline(std::cin, s1);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, s2);

    int index = index_of(s1, s2);

    if (index != -1)
        std::cout << "The substring " << s2 << " was found at position " << index << ".\n";
    else
        std::cout << "The substring " << s2 << " was not found in " << s1 << ".\n";

    return 0;
}
