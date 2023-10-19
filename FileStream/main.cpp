#include <iostream>
#include <string>
#include <fstream>      // file streams (ifstream and ofstream)

#include "ManageTeams.h"

int main()
{
    /*
     * File streams are derived from std::istream and std::ostream.
     * They have special methods for reading and writing to files.
     */

    // File streams to read to files
    std::ifstream inFileStream;
    int num;
    std::string numStr;

    std::cout << "Opening file" << std::endl;

    // NOTE: File must be in the cmake-build-debug folder (just copy and paste it there)
    inFileStream.open("InputFile.txt");
    if (!inFileStream.is_open())            // Make sure the file opened properly
    {
        std::cout << "Error occurred when opening the file" << std::endl;
        return -1;
    }

    std::cout << "Reading file" << std::endl;

    inFileStream >> num;        // reads first int (20)
    while (!inFileStream.fail())        // make sure file didnt fail to read (at the end of the file, or an invalid character (char instead of int))
    {
        inFileStream >> numStr;     // reads the string number (terminates at \n or whitespace)
        std::cout << num << ' ' << numStr << std::endl;
        inFileStream >> num;
    }

    std::cout << "Closing file" << std::endl;
    inFileStream.close();



    // File stream to write to files
    std::ofstream outFileStream;

    std::cout << "Opening output file" << std::endl;
    outFileStream.open("InputFile.txt");
    if (!outFileStream.is_open())
    {
        // May occur if file is read only
        std::cout << "Failed to open this file" << std::endl;
        return -1;
    }

    std::cout << "Writing to output file" << std::endl;

    // Writing more numbers to the file. This replaces what was originally in the file
    outFileStream << 60 << " sixty" << std::endl;
    outFileStream << 70 << " seventy" << std::endl;
    outFileStream << 80 << " eighty" << std::endl;

    // Closing also writes to the file. MUST close to save file
    std::cout << "Closing output file" << std::endl << std::endl;
    outFileStream.close();



    // Testing ManageTeams class
    ManageTeams manager;

    // Read Teams from file and store them
    manager.readFile("Teams.txt");
    manager.print();

    // Write reformatted teams into NewTeams.txt (located in cmake-build-debug)
    manager.writeFile("NewTeams.txt");

    // Testing overloaded operator<< (prints same as what is written to the file)
    std::cout << std::endl;
    std::cout << manager << std::endl;

    std::cout << "--- Sorted teams ---" << std::endl;
    manager.sortTeams();
    std::cout << manager << std::endl;

    return 0;
}
