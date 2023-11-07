/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
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
CxxTest::StaticSuiteDescription suiteDescription_CourseTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch9Exam/CourseTest.h", 18, "CourseTest", suite_CourseTest, Tests_CourseTest );

static class TestDescription_suite_CourseTest_testLoadFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testLoadFile() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 30, "testLoadFile" ) {}
 void runTest() { suite_CourseTest.testLoadFile(); }
} testDescription_suite_CourseTest_testLoadFile;

static class TestDescription_suite_CourseTest_testGetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testGetters() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 67, "testGetters" ) {}
 void runTest() { suite_CourseTest.testGetters(); }
} testDescription_suite_CourseTest_testGetters;

static class TestDescription_suite_CourseTest_testGetters2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testGetters2() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 103, "testGetters2" ) {}
 void runTest() { suite_CourseTest.testGetters2(); }
} testDescription_suite_CourseTest_testGetters2;

static class TestDescription_suite_CourseTest_testOperators : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testOperators() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 123, "testOperators" ) {}
 void runTest() { suite_CourseTest.testOperators(); }
} testDescription_suite_CourseTest_testOperators;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
