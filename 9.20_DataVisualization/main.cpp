#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>

int main()
{
    // Variables to store user data:
    std::string title;
    std::string header1, header2;
    std::string dataInput;
    std::vector<std::string> stringData;
    std::vector<int> intData;

    // (1) Get title
    std::cout << "Enter a title for the data:" << std::endl;
    std::getline(std::cin, title);
    std::cout << "You entered: " << title << std::endl
                << std::endl;

    // (2) Get headers for columns
    std::cout << "Enter the column 1 header:" << std::endl;
    std::getline(std::cin, header1);
    std::cout << "You entered: " << header1 << std::endl
                << std::endl;

    std::cout << "Enter the column 2 header:" << std::endl;
    std::getline(std::cin, header2);
    std::cout << "You entered: " << header2 << std::endl
                << std::endl;

    // (3) Get data point entries in the form: "string, int"
    bool quit = false;
    while (!quit)
    {
        int commaCount = 0;
        int commaIndex = 0;

        std::cout << "Enter a data point (-1 to stop input):" << std::endl;
        std::getline(std::cin, dataInput);

        // Quit case
        if (dataInput == "-1")
        {
            quit = true;
            std::cout << std::endl;
            break;
        }

        // Count commas in input
        for (int i = 0; i < dataInput.length(); ++i)
        {
            if (dataInput[i] == ',')
            {
                ++commaCount;
                commaIndex = i;
            }
        }

        // (4) Check for valid formatting of input (error checking)
        if (commaCount < 1)
        {
            std::cout << "Error: No comma in string." << std::endl
                        << std::endl;
            continue;
        }
        else if (commaCount > 1)
        {
            std::cout << "Error: Too many commas in input." << std::endl
                        << std::endl;
            continue;
        }
        else
        {
            // Valid number of commas.
            // Check if there is an int data at the end.
            // Extract string and int data from input:
            std::string strInput = dataInput.substr(0, commaIndex);     // string contents before the comma
            std::string intInputStr = dataInput.substr(commaIndex + 1);    // string contents after the comma
            std::istringstream strStream(intInputStr);
            int intInput;
            strStream >> intInput;
            if (strStream.fail())       // cant extract an int (there is not an int at the end)
            {
                std::cout << "Error: Comma not followed by an integer." << std::endl
                            << std::endl;
                continue;
            }
            else
            {
                // Input is valid, add data to the lists
                std::cout << "Data string: " << strInput << std::endl;
                std::cout << "Data integer: " << intInput << std::endl
                            << std::endl;

                stringData.push_back(strInput);
                intData.push_back(intInput);
            }
        }

    }

    // (5) Output information into a formatted table.
    // Title: right setw(33)
    // Col1: left, setw(20)
    // col2: right, setw(23)

    // Top of table
    std::cout << std::setw(33) << title << std::endl;
    std::cout << std::left << std::setw(20) << header1 << "|";
    std::cout << std::right << std::setw(23) << header2 << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    // Table entries
    for (int i = 0; i < stringData.size(); ++i)
    {
        std::cout << std::left << std::setw(20) << stringData.at(i) << "|";
        std::cout << std::right << std::setw(23) << intData.at(i) << std::endl;
    }
    std::cout << std::endl;


    // (6) Output histogram for the data
    for (int i = 0; i < stringData.size(); ++i)
    {
        std::cout << std::setw(20) << stringData.at(i) << " ";
        std::cout << std::setw(intData.at(i)) << std::setfill('*') << "" << std::endl;
        std::cout << std::setfill(' ');
    }

    return 0;
}