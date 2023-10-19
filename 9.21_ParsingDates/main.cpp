#include <iostream>
#include <vector>
#include <sstream>


int GetMonthAsInt(const std::string& month)
{
    int monthInt = 0;

    if (month == "January")
        monthInt = 1;
    else if (month == "February")
        monthInt = 2;
    else if (month == "March")
        monthInt = 3;
    else if (month == "April")
        monthInt = 4;
    else if (month == "May")
        monthInt = 5;
    else if (month == "June")
        monthInt = 6;
    else if (month == "July")
        monthInt = 7;
    else if (month == "August")
        monthInt = 8;
    else if (month == "September")
        monthInt = 9;
    else if (month == "October")
        monthInt = 10;
    else if (month == "November")
        monthInt = 11;
    else if (month == "December")
        monthInt = 12;
    return monthInt;
}

int main()
{
    std::string input;
    std::getline(std::cin, input);
    std::vector<std::string> dates;

    while (input != "-1")
    {
        std::istringstream iStrStream;
        std::string month;
        std::string strAfterMonth;
        int monthNum, day, year;
        int spaceIndex = 0;
        bool containsComma = false;

        // Find index of first space (after month)
        // Check if there is a comma, then replace it with ' '
        for (int i = 0; i < input.size(); ++i)
        {
            if (input[i] == ' ' && spaceIndex == 0)
            {
                spaceIndex = i;
            }
            if (input[i] == ',')
            {
                containsComma = true;
                input[i] = ' ';
            }
        }

        // Parse individual pieces of input:
        month = input.substr(0, spaceIndex);        // The month name ("May")
        strAfterMonth = input.substr(spaceIndex + 1);   // Text after the month name, without comma (12  2000)
        monthNum = GetMonthAsInt(month);
        iStrStream.str(strAfterMonth);
        iStrStream >> day >> year;          // extract day and year (may fail)
        if (!containsComma || monthNum == 0 || iStrStream.fail())  // check for invalid input
        {
            // Get new input, clear error state, and start over
            std::getline(std::cin, input);
            iStrStream.clear();
            continue;
        }

        // Construct the final date string
        std::ostringstream parsedDate;
        parsedDate << monthNum << '-' << day << '-' << year;
        dates.push_back(parsedDate.str());

        std::getline(std::cin, input);
    }

    // Print each date in the list
    for (auto i = dates.begin(); i < dates.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    return 0;
}
