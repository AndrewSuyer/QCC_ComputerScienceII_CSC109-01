#include <iostream>
#include "Course.h"
using namespace std;

int main() {
    Course course;
    cout << "Load course:" << endl;
    std::cout << "Opening file course1.txt" << std::endl;
    course.LoadFile("course1.txt");
    course.Print();
    course.PassCourse("passcourse1.txt");


    cout << endl;
    cout << "Pass course:" << endl;
    std::cout << "Opening file passcourse1.txt" << std::endl;
    Course pCourse;
    pCourse.LoadFile("passcourse1.txt");
//    pCourse.Print();
    vector<Student> s = pCourse.GetRoster();
    for (size_t i=0; i<s.size(); i++) {
        cout << s.at(i) << endl;
    }
    return 0;
}
