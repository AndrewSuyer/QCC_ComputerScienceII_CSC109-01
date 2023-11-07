#include <iostream>
#include <vector>
#include <sstream>
#include <queue>

#include "Appointment.h"
#include "Daily.h"
#include "Monthly.h"
#include "Onetime.h"

/*
 * This program is written in a strange way...
 * It is designed to receive all user input at the start of main().
 * It then stores all the lines of input into a queue, which then gets read element by element
 * until all the commands are satisfied.
 * This allows the output to look the same no matter when the input is received. Zybooks required
 * that the input look exactly a certain way, and this was the solution I came up with.
 */

int main()
{
    std::vector<Appointment*> appointments;
    char command;

    // Getting user input all at once, then storing it into a queue
    std::queue<std::string> commandQueue;
    std::string currentLine;
    std::getline(std::cin, currentLine);
    while (currentLine != "q")
    {
        commandQueue.push(currentLine);
        std::getline(std::cin, currentLine);
    }

    // Going through the queue element by element so that each line is displayed properly
    while (!commandQueue.empty())
    {
        std::string commandStr = commandQueue.front();
        command = commandStr.at(0);
        commandQueue.pop();
        std::cout << "Daily Monthly Onetime Check Save Load Quit (d/m/o/c/s/l/q): " << commandStr << '\n';

        if (command == 'd')
        {
            auto* appt = new Daily();
            std::istringstream iss;
            iss.str(commandQueue.front());
            std::cout << "Enter start_hours start_mins end_hours end_mins descript: \n";
            commandQueue.pop();
            appt->load(iss);

//            appt->read();
            appointments.push_back(appt);
        }

        if (command == 'm')
        {
            auto* appt = new Monthly();
            std::istringstream iss;
            std::string info, day;
            info = commandQueue.front();
            commandQueue.pop();
            day = commandQueue.front();
            commandQueue.pop();
            std::string commands = day;
            commands += ' ';
            commands += info;

            std::cout << "Enter start_hours start_mins end_hours end_mins descript: ";
            std::cout << "Enter day: \n";
            iss.str(commands);
            appt->load(iss);

//            appt->read();
            appointments.push_back(appt);
        }

        if (command == 'o')
        {
            auto* appt = new Onetime();
            std::istringstream iss;
            std::string info, date;
            info = commandQueue.front();
            commandQueue.pop();
            date = commandQueue.front();
            commandQueue.pop();
            std::string commands = date;
            commands += ' ';
            commands += info;
            iss.str(commands);

            std::cout << "Enter start_hours start_mins end_hours end_mins descript: ";
            std::cout << "Enter year month day: \n";
            appt->load(iss);

//            appt->read();
            appointments.push_back(appt);
        }

        // Check for appointments on specified date
        if (command == 'c')
        {
            std::string line = commandQueue.front();
            std::istringstream iss(line);
            int y, m, d;
            std::cout << "Enter year month day: \n";
            iss >> y >> m >> d;
            commandQueue.pop();
            std::cout << "You have these appointments:\n";

            for (const Appointment* appt : appointments)
            {
                if (appt->occurs_on(y, m, d))
                {
//                    std::cout << ' ';
                    appt->print();
                }
            }
        }

        // Save file into vector (doesnt override contents)
        if (command == 's')
        {
            // Setup output file stream
            std::string fileName = commandQueue.front();
            std::cout << "File name: \n";                 // ? Output file name ?
            commandQueue.pop();
//            std::cin >> fileName;
            std::ofstream ofs(fileName);

            for (const Appointment* appt : appointments)
            {
                appt->save(ofs);
            }

            ofs.close();
        }

        // Load from file into vector (doesnt erase vector)
        if (command == 'l')
        {
            // Setup input file stream
            std::string fileName = commandQueue.front();
            commandQueue.pop();
            std::cout << "File name: \n";
            std::ifstream ifs(fileName);

            if (!ifs.is_open())
            {
                std::cerr << "Failed to open file: " << fileName << " during load command\n";
            }

            std::string appType;
            while (std::getline(ifs, appType))
            {
                if (appType == "Daily")
                {
                    auto* appt = new Daily();
                    appt->load(ifs);
                    appointments.push_back(appt);
                }

                if (appType == "Monthly")
                {
                    auto* appt = new Monthly();
                    appt->load(ifs);
                    appointments.push_back(appt);
                }

                if (appType == "Onetime")
                {
                    auto* appt = new Onetime();
                    appt->load(ifs);
                    appointments.push_back(appt);
                }

                ifs.ignore();
            }

            ifs.close();
        }

//        commandQueue.pop();
    }

    // The last input request (which would be 'q')
    std::cout << "Daily Monthly Onetime Check Save Load Quit (d/m/o/c/s/l/q): q\n";

    return 0;

    std::cout << "Daily Monthly Onetime Check Save Load Quit (d/m/o/c/s/l/q): ";
    std::cin >> command;

    while (command != 'q')
    {
        if (command == 'd')
        {
            auto* appt = new Daily();
            appt->read();
            appointments.push_back(appt);
        }

        if (command == 'm')
        {
            auto appt = new Monthly();
            appt->read();
            appointments.push_back(appt);
        }

        if (command == 'o')
        {
            auto appt = new Onetime();
            appt->read();
            appointments.push_back(appt);
        }

        // Check for appointments on specified date
        if (command == 'c')
        {
            int y, m, d;
            std::cout << "Enter year month day: ";
            std::cin >> y >> m >> d;
            std::cout << "You have these appointments:\n";

            for (const Appointment* appt : appointments)
            {
                if (appt->occurs_on(y, m, d))
                {
//                    std::cout << ' ';
                    appt->print();
                }
            }
        }

        // Save file into vector (doesnt override contents)
        if (command == 's')
        {
            // Setup output file stream
            std::string fileName;
            std::cout << "File name: ";
            std::cin >> fileName;
            std::ofstream ofs(fileName);

            for (const Appointment* appt : appointments)
            {
                appt->save(ofs);
            }

            ofs.close();
        }

        // Load from file into vector (doesnt erase vector)
        if (command == 'l')
        {
            // Setup input file stream
            std::string fileName;
            std::cout << "File name: ";
            std::cin >> fileName;
            std::ifstream ifs(fileName);

            if (!ifs.is_open())
            {
                std::cerr << "Failed to open file: " << fileName << " during load command\n";
            }

            std::string appType;
            while (std::getline(ifs, appType))
            {
                if (appType == "Daily")
                {
                    auto* appt = new Daily();
                    appt->load(ifs);
                    appointments.push_back(appt);
                }

                if (appType == "Monthly")
                {
                    auto* appt = new Monthly();
                    appt->load(ifs);
                    appointments.push_back(appt);
                }

                if (appType == "Onetime")
                {
                    auto* appt = new Onetime();
                    appt->load(ifs);
                    appointments.push_back(appt);
                }

                ifs.ignore();
            }

            ifs.close();
        }

        std::cout << "Daily Monthly Onetime Check Save Load Quit (d/m/o/c/s/l/q): ";
        std::cin >> command;
    }

    // Debug Print (comment out):
//    for (const Appointment* appt : appointments)
//    {
//        appt->print();
//    }

    return 0;
}
