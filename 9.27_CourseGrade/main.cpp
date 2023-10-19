#include <iostream>
#include <fstream>
#include <iomanip>


/*
 * (1) Read the file name of the tsv (tab seperated values) file and open it
 * (2) Compute the average score of each student, then assign a letter grade based on the average
 * (3) In report.txt, write: last name    first name     exam scores     letter grade (seperated with tabs \t)
 * (4) Output average of each exam with fixed precision of 2
 */

int main()
{
    std::string fileName;
    std::ifstream iFileStream;

    // (1)
    std::cout << "Enter a file name:" << std::endl;     // remove on release
    std::cin >> fileName;
    iFileStream.open(fileName);


    // (2)
    std::string firstName, lastName;
    int g1 = 0, g2 = 0, g3 = 0;                     // number grades
    int sumG1 = 0, sumG2 = 0, sumG3 = 0;            // sum of grades for each test (used for individual exam average)
    int studentCount = 0;
    char letterGrade;
    std::ofstream oFileStream("report.txt");          // to write to "reports.txt"

    if (!iFileStream.is_open() || !oFileStream.is_open())
    {
        return -1;
    }

    iFileStream >> firstName >> lastName >> g1 >> g2 >> g3;
    while (!iFileStream.eof())
    {
        ++studentCount;
        sumG1 += g1;
        sumG2 += g2;
        sumG3 += g3;

        // Calculate average and letter grade:
        double avg = (g1 + g2 + g3) / 3.0;
        if (avg >= 90)
            letterGrade = 'A';
        else if (avg >= 80)
            letterGrade = 'B';
        else if (avg >= 70)
            letterGrade = 'C';
        else if (avg >= 60)
            letterGrade = 'D';
        else
            letterGrade = 'F';

        // (3)
        oFileStream << firstName << '\t' << lastName << '\t' << g1 << '\t' << g2 << "\t" << g3 << '\t' << letterGrade << std::endl;

        iFileStream >> firstName >> lastName >> g1 >> g2 >> g3;
    }

    // (4)
    oFileStream << std::endl << std::setprecision(2) << std::fixed;
    oFileStream << "Averages: midterm1 " << (double) sumG1 / studentCount << ", midterm2 "
                << (double) sumG2 / studentCount << ", final "
                << (double) sumG3 / studentCount << std::endl;

    iFileStream.close();

    return 0;
}
