#include <iostream>
#include <string>

/*
 * Todo:
 * Fix loop::find
 */

namespace recursion
{
    /**
     * Finds if s contains the string t using a recursive algorithm
     * @return true if s contains t, false otherwise
     */
    bool find(const std::string& s, const std::string& t)
    {
        // Base case: beginning of s equals t
        if (s.substr(0, t.length()) == t)
            return true;

        // Base case: s and t have the same length but are not equal
        if (s.length() == t.length())
            return false;

        // Recursive case: remove front char of s
        return find(s.substr(1), t);
    }
}

namespace loop
{
    /**
     * Finds if s contains the string t using a for loop algorithm
     * @return true if s contains t, false otherwise
     */
    bool find(const std::string& s, const std::string& t)
    {
        for (int i = 0; i < (s.length() - t.length()); ++i)
        {
            if (s.substr(i, t.length()) == t)
                return true;
        }
        return false;
    }
}

int main()
{
    std::string s1, s2;

    // Get input:
    std::cout << "Enter the first string: ";
    std::getline(std::cin, s1);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, s2);

    bool s1ContainsS2 = recursion::find(s1, s2);            // <-- Change 'recursion' to 'loop' to test the other algorithm

    if (s1ContainsS2)
        std::cout << "The substring " << s2 << " was found in " << s1 << '\n';
    else
        std::cout << "The substring " << s2 << " was not found in " << s1 << '\n';

    return 0;
}
