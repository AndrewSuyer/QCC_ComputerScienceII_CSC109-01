#include <iostream>
#include <string>
#include <sstream>

/*
 * Prompt user for a line containing 2 strings separated by a comma (,):
 * A, B     A,B     A   , B
 * Prompt until input contains a comma.
 * Parse the input and display the 2 strings separately.
 * Continue until user types 'q' for quit
 */


int main()
{
    // Continue program until user quits with 'q'
    bool quit = false;
    while (!quit)
    {
        std::string input;
        std::istringstream strStream;
        std::string s1, s2;             // stores the 2 strings

        // Loop until string contains a comma
        bool containsComma = false;
        while (!containsComma)
        {
            // Get user input:
            std::cout << "Enter input string:" << std::endl;
            std::getline(std::cin, input);

            // Check for quit:
            if (input == "q")
            {
                quit = true;
                break;
            }

            // Check for comma in input string. If there is one, replace it with a ' '. Create
            // new string as clean version of input (no comma, one space)
            std::string newInput;
            for (char c : input)
            {
                // Append all characters except ',' and ' ' to new input
                if (c == ',')
                {
                    containsComma = true;
                    newInput += ' ';        // put ' ' in place of ','
                }
                else if (c != ' ')
                {
                    newInput += c;
                }
            }

            // Input should now contain a string of the form "aaaa bbbbbbb" (no comma, one space)
            input = newInput;

            // If comma wasn't found, print error then restart loop
            if (!containsComma)
            {
                std::cout << "Error: No comma in string." << std::endl
                            << std::endl;

            }
        }

        if (quit)
            break;

        strStream.str(input);
        strStream >> s1 >> s2;      // separate strings into 2
        std::cout << "First word: " << s1 << std::endl;
        std::cout << "Second word: " << s2 << std::endl
                    << std::endl;
    }


    return 0;
}
