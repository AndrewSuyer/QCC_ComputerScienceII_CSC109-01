#include <iostream>
#include <fstream>

/*
 * Read from the file that the user specifies (ParkPhotos.txt)
 * Replace "_photo.jpg" with "_info.txt" and output each item in the file
 */

int main()
{
    // Get file name from input
    std::string fileName;
    std::cout << "Enter a file to open:" << std::endl;            // remove for submit
    std::cin >> fileName;
    std::ifstream iFileStream(fileName);

    std::string line;
    while (iFileStream >> line)         // Read each line of the file (this converts to false when it fails)
    {
        line = line.substr(0, line.length() - 9);       // removes "photo.jpg" from line
        line += "info.txt";
        std::cout << line << std::endl;
    }

    iFileStream.close();

    return 0;
}
