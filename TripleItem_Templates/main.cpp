#include <iostream>
#include <ostream>

#include "TripleItem.h"
#include "Course.h"
#include "OfferedCourse.h"
#include "ClassTime.h"
#include "Student.h"

using namespace std;

void TripleItemTest()
{
    TripleItem<int> triInts(9999, 5555, 6666);  // TripleItem class with ints
    TripleItem<short> triShorts(99, 55, 66);    // TripleItem class with shorts

    // Try functions from TripleItem
    triInts.PrintAll();
    cout << "Min: " << triInts.MinItem() << endl << endl;

    triShorts.PrintAll();
    cout << "Min: " << triShorts.MinItem() << endl << endl;

    cout << "triInts: " << triInts << endl;
    cout << "triShorts: " << triShorts << endl;
}


void CourseTestString()
{
    Course<string> myCourse;
    OfferedCourse<string, string> myOfferedCourse;

    string courseNumber, courseTitle;
    string oCourseNumber, oCourseTitle, instructorName, location, classTime;

    getline(cin, courseNumber);
    getline(cin, courseTitle);

    getline(cin, oCourseNumber);
    getline(cin, oCourseTitle);
    getline(cin, instructorName);
    getline(cin, location);
    getline(cin, classTime);

    myCourse.SetCourseNumber(courseNumber);
    myCourse.SetCourseTitle(courseTitle);
    myCourse.PrintInfo();

    myOfferedCourse.SetCourseNumber(oCourseNumber);
    myOfferedCourse.SetCourseTitle(oCourseTitle);
    myOfferedCourse.SetInstructorName(instructorName);
    myOfferedCourse.SetLocation(location);
    myOfferedCourse.SetClassTime(classTime);
    myOfferedCourse.PrintInfo();

    cout << "   Instructor Name: " << myOfferedCourse.GetInstructorName() << endl;
    cout << "   Location: " << myOfferedCourse.GetLocation() << endl;
    cout << "   Class Time: " << myOfferedCourse.GetClassTime() << endl;

}


void CourseTestClassTimeObject()
{
    Course<string> myCourse;
    OfferedCourse<string, ClassTime> myOfferedCourse;

    string courseNumber, courseTitle;
    string oCourseNumber, oCourseTitle, instructorName, location, classTime;

    getline(cin, courseNumber);
    getline(cin, courseTitle);

    getline(cin, oCourseNumber);
    getline(cin, oCourseTitle);
    getline(cin, instructorName);
    getline(cin, location);
    getline(cin, classTime);

    myCourse.SetCourseNumber(courseNumber);
    myCourse.SetCourseTitle(courseTitle);
    myCourse.PrintInfo();

    myOfferedCourse.SetCourseNumber(oCourseNumber);
    myOfferedCourse.SetCourseTitle(oCourseTitle);
    myOfferedCourse.SetInstructorName(instructorName);
    myOfferedCourse.SetLocation(location);
    myOfferedCourse.SetClassTime(classTime);
    myOfferedCourse.PrintInfo();

    cout << "   Instructor Name: " << myOfferedCourse.GetInstructorName() << endl;
    cout << "   Location: " << myOfferedCourse.GetLocation() << endl;
    cout << "   Class Time: " << myOfferedCourse.GetClassTime() << endl;
}


void CourseTestInt()
{
    Course<int> myCourse;
    OfferedCourse<int, std::string> myOfferedCourse;

    int courseNumber;
    std::string courseTitle, oCourseTitle;
    int oCourseNumber;
    std::string instructorName, location, classTime;

    cin >> courseNumber;
    getline(cin, courseTitle);

    cin >> oCourseTitle;
    cin >> oCourseTitle;
    getline(cin, instructorName);
    getline(cin, location);
    getline(cin, classTime);

    myCourse.SetCourseNumber(courseNumber);
    myCourse.SetCourseTitle(courseTitle);
    myCourse.PrintInfo();

    myOfferedCourse.SetCourseNumber(oCourseNumber);
    myOfferedCourse.SetCourseTitle(oCourseTitle);
    myOfferedCourse.SetInstructorName(instructorName);
    myOfferedCourse.SetLocation(location);
    myOfferedCourse.SetClassTime(classTime);
    myOfferedCourse.PrintInfo();

    cout << "   Instructor Name: " << myOfferedCourse.GetInstructorName() << endl;
    cout << "   Location: " << myOfferedCourse.GetLocation() << endl;
    cout << "   Class Time: " << myOfferedCourse.GetClassTime() << endl;

}


void studentTest()
{
    Student<int, std::string, ClassTime> s1("Andrew", 123456);
    Student<std::string, std::string, ClassTime> s2("Andrew", "7hdbawdy172378c");

    OfferedCourse<std::string, ClassTime> c1;
}


int main()
{
//    CourseTestString();
//    CourseTestInt();
    CourseTestClassTimeObject();

    return 0;
}
