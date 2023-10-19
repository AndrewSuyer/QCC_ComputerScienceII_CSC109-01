#include <iostream>
#include <string>
#include <sstream>  // string input and output streams
#include <iomanip>  // input and output stream manipulators


int main()
{
    /*
     * Input and output streams store characters in a buffer.
     * std::cin and std::cout are part of istream and ostream respectively. They are specifically used to do IO with keyboard and console (standard IO).
     * <iomanip> includes manipulators to manipulate the input and output streams
     */

    double PI = 314.1592;
    std::string piStr = "PI";

    // Buffer manipulators:
    // Flushing a buffer sends the data stored in the buffer (in memory) to the output. The following manipulators are used
    // to tell the system exactly when to do this:
    // std::flush - tells system to flush the buffer
    // std::endl - inserts a newline character \n and flushes the buffer
    // *These will be used below*

    // Floating point manipulators:
    // Once declared, these are persistent (effects all further output)
    // std::fixed - Use fixed point notation (314.1592)
    // std::scientific - Use scientific notation (3.141592e+02)
    std::cout << "Fixed PI: " << std::fixed << PI << std::endl;                         // 314.159200
    std::cout << "Scientific PI: " << std::scientific << PI << std::endl;               // 3.141592e+02
    std::cout << "PI: " << PI << std::endl;                                             // Uses scientific notation because that was last declared

    // std::setprecision(n) - sets the number of digits to display. If used together with std::fixed or std::scientific,
    // specifies how many digits after the decimal point to output.
    // Default precision after fixed decimal is 6.
    // Math rounding occurs!!!
    std::cout << "PI (2): " << std::setprecision(2) << PI << std::endl;                                 // 31
    std::cout << "PI (fixed 2): " << std::fixed << std::setprecision(2) << PI << std::endl;             // 314.15
    std::cout << "PI (scientific 2): " << std::scientific << std::setprecision(2) << PI << std::endl;   // 3.14e+02
    std::cout << "PI (fixed, no precision): " << std::fixed << PI << std::endl;                            // Uses precision of 2 (from before)

    // std::showpoint - Tell ostream to show the decimal point even if there is nothing after it
    std::cout << std::showpoint << 4 << std::endl;          // 4 (integers dont have points)
    std::cout << std::showpoint << (double) 4 << std::endl; // 4.00 (precision is still set to 2)
    std::cout << std::showpoint << 4.000 << std::endl;      // 4.00 (precision is still set to 2)


    // Text alignment manipulators:
    // std::setw(n) - sets the number of characters for the next output item only
    // std::setfill(c) - sets character to fill with (persistent)
    // std::left and std::right - alignment manipulators (right is default, is persistent)

    std::cout << std::setw(15) << PI << std::endl;                                          // "         314.16"
    std::cout << std::setw(15) << std::setfill('-') << PI << std::endl;                  // "---------314.16"
    std::cout << std::left << std::setw(15) << PI << std::endl;                             // "314.16----------"
    std::cout << std::left << std::setw(15) << std::setfill(' ') << PI << std::endl;     // "314.16          "
    std::cout << std::left << std::setw(15) << std::setfill(' ') << PI << std::endl;     // "314.16          "





    /*
     * String streams are objects derived from std::istream and std::ostream.
     * They contain all the standard manipulators and operators, as well as some new ones.
     * These are useful for getting a single input line from the user, then extracting pieces of it (shown below)
     */

    std::string userInfo;   // stores what the user inputs with cin
    std::cout << "Enter NAME AGE LETTER_GRADE" << std::endl;
    std::getline(std::cin, userInfo);   // Get the entire line up until \n

    // These will store parts of the userInfo string
    std::string name;
    int age;
    char letterGrade;

    // Create a string stream with the userInfo in the buffer
    std::istringstream iss(userInfo);

    // Extract the name, age, and grade from the string buffer. This is the same as using cin >> name; cin >> age; cin >> letterGrade;
    iss >> name >> age >> letterGrade;

    // Outputting each individual variable:
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Grade: " << letterGrade << std::endl;

    // Can use an output string stream to format output
    std::ostringstream oss;
    oss << name << ", " << age << ", " << letterGrade << std::endl;

    // Access stream contents with str()
    std::cout << oss.str();

    return 0;
}
