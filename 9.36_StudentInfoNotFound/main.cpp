#include <string>
#include <iostream>
#include <stdexcept>
#include <fstream>

using std::string, std::ifstream;
using std::cin, std::cout, std::endl;

string FindID(const string& name, ifstream &infoFS)
{
    // Stores name on current line of file
    string nm;

    while (infoFS >> nm)
    {
        if (nm == name)
        {
            string id;
            infoFS >> id;
            return id;
        }
        infoFS >> nm;       // 2 strings per line. Do this here then again in the while loop statement
    }

    throw std::runtime_error("Student ID not found for " + name);
}

string FindName(const string& ID, ifstream &infoFS)
{
    // Stores id on current line of file
    string name;
    string id;


    while (infoFS >> name)
    {
        infoFS >> id;

        if (id == ID)
        {
            return name;
        }
    }

    throw std::runtime_error("Student name not found for " + ID);
}

int main() {
    int userChoice;
    string studentName;
    string studentID;

    string studentInfoFileName;
    ifstream studentInfoFS;

    // Read the text file name from user
    cin >> studentInfoFileName;

    // Open the text file
    studentInfoFS.open(studentInfoFileName);

    // Read search option from user. 0: FindID(), 1: FindName()
    cin >> userChoice;

    // FIXME: FindID() and FindName() may throw an Exception.
    //        Insert a try/catch statement to catch the exception and output the exception message.

    try
    {
        if (userChoice == 0) {
            cin >> studentName;
            studentID = FindID(studentName, studentInfoFS);
            cout << studentID << endl;
        }
        else {
            cin >> studentID;
            studentName = FindName(studentID, studentInfoFS);
            cout << studentName << endl;
        }
    }
    catch (const std::runtime_error& e)
    {
        std::cout << e.what() << std::endl;
    }

    studentInfoFS.close();
    return 0;
}
