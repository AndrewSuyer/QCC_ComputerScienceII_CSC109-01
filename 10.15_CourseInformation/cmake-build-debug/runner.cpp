/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_CourseTest_init = false;
#include "../CourseTest.h"

static CourseTest suite_CourseTest;

static CxxTest::List Tests_CourseTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CourseTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.15_CourseInformation/CourseTest.h", 17, "CourseTest", suite_CourseTest, Tests_CourseTest );

static class TestDescription_suite_CourseTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testAll() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 29, "testAll" ) {}
 void runTest() { suite_CourseTest.testAll(); }
} testDescription_suite_CourseTest_testAll;

#include "../OfferedCourseTest.h"

static OfferedCourseTest suite_OfferedCourseTest;

static CxxTest::List Tests_OfferedCourseTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_OfferedCourseTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.15_CourseInformation/OfferedCourseTest.h", 16, "OfferedCourseTest", suite_OfferedCourseTest, Tests_OfferedCourseTest );

static class TestDescription_suite_OfferedCourseTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_OfferedCourseTest_testAll() : CxxTest::RealTestDescription( Tests_OfferedCourseTest, suiteDescription_OfferedCourseTest, 28, "testAll" ) {}
 void runTest() { suite_OfferedCourseTest.testAll(); }
} testDescription_suite_OfferedCourseTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
