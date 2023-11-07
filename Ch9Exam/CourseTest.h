/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch9 exam
 */

#ifndef CH9EXAM_COURSETEST_H
#define CH9EXAM_COURSETEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Course.h"
#include "Student.h"

class CourseTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testLoadFile()
    {
        Course course;

        try
        {
            course.LoadFile("NotAFile.txt");        // test throwing error
        }
        catch (const std::runtime_error& e)
        {
//            TS_ASSERT_THROWS_ANYTHING(course.LoadFile("NotAFile.txt"))
        }

        course.LoadFile("course1.txt");

        std::vector<Student> v = course.GetRoster();

        Student s0("Marvin", "Sandoval", 70);
        Student s1("Brent", "Bridges", 65);
        Student s2("Dwayne", "Clayton", 94);
        Student s3("Maggie", "Miller", 92);
        Student s4("Joseph", "Pearson", 69);

        Student s5("Joseph", "Pearson", 69);

        TS_ASSERT_EQUALS(s4, s5)            // tests operator==

        TS_ASSERT_EQUALS(v.at(0), s0)
        TS_ASSERT_EQUALS(v.at(1), s1)
        TS_ASSERT_EQUALS(v.at(2), s2)
        TS_ASSERT_EQUALS(v.at(3), s3)
        TS_ASSERT_EQUALS(v.at(4), s4)

        course.PassCourse("passcourse1.txt");
    }


    void testGetters()
    {
        Course course;
        Student s0("Andrew", "Suyer", 88);
        Student s1("Andrew", "Suyer", 88);
        Student s2("Nathan", "Sawyer", 98);

        course.AddStudent(s0);
        course.AddStudent(s1);
        course.AddStudent(s2);

        Student highest = course.FindStudentHighestGpa();
        TS_ASSERT_EQUALS(highest, s2)

        std::vector<Student> v = course.GetRoster();

        TS_ASSERT_EQUALS(v.at(0), s0)
        TS_ASSERT_EQUALS(v.at(1), s1)
        TS_ASSERT_EQUALS(v.at(2), s2)

        course.RemoveStudent(s2);
        v = course.GetRoster();

        TS_ASSERT_EQUALS(v.at(0), s0)
        TS_ASSERT_EQUALS(v.at(1), s1)

        try
        {
            course.RemoveStudent(s2);       // test error throwing
        }
        catch (const std::runtime_error& e) {}

        course.Print();
        std::cout << course << '\n';
    }

    void testGetters2()
    {
        Student s0("Andrew", "Suyer", 98);
        Student s1("Nathan", "Sawyer", 88);
        Student s2("Hannah", "Slayer", 90);

        TS_ASSERT_EQUALS(s0.GetFirst(), "Andrew")
        TS_ASSERT_EQUALS(s0.GetLast(), "Suyer")
        TS_ASSERT_EQUALS(s0.GetGPA(), 98)

        TS_ASSERT_EQUALS(s1.GetFirst(), "Nathan")
        TS_ASSERT_EQUALS(s1.GetLast(), "Sawyer")
        TS_ASSERT_EQUALS(s1.GetGPA(), 88)

        TS_ASSERT_EQUALS(s2.GetFirst(), "Hannah")
        TS_ASSERT_EQUALS(s2.GetLast(), "Slayer")
        TS_ASSERT_EQUALS(s2.GetGPA(), 90)
    }


    void testOperators()
    {
        Student s0("Andrew", "Suyer", 98);
        Student s1("Andrew", "Suyer", 98);
        Student s2("Nathan", "Sawyer", 88);

        TS_ASSERT_EQUALS(s0, s1)
        TS_ASSERT_DIFFERS(s0, s2)
        TS_ASSERT_DIFFERS(s1, s2)

        std::ostringstream oss;
        oss << s0;
        std::string s = oss.str();

        TS_ASSERT_EQUALS(s, "Andrew Suyer 98\n")
    }

};


#endif // CH9EXAM_COURSETEST_H
