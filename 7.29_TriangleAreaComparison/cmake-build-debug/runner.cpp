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
bool suite_TriangleTest_init = false;
#include "../TriangleTest.h"

static TriangleTest suite_TriangleTest;

static CxxTest::List Tests_TriangleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TriangleTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.29_TriangleAreaComparison/TriangleTest.h", 17, "TriangleTest", suite_TriangleTest, Tests_TriangleTest );

static class TestDescription_suite_TriangleTest_testGetArea : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TriangleTest_testGetArea() : CxxTest::RealTestDescription( Tests_TriangleTest, suiteDescription_TriangleTest, 31, "testGetArea" ) {}
 void runTest() { suite_TriangleTest.testGetArea(); }
} testDescription_suite_TriangleTest_testGetArea;

static class TestDescription_suite_TriangleTest_testPrintInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TriangleTest_testPrintInfo() : CxxTest::RealTestDescription( Tests_TriangleTest, suiteDescription_TriangleTest, 39, "testPrintInfo" ) {}
 void runTest() { suite_TriangleTest.testPrintInfo(); }
} testDescription_suite_TriangleTest_testPrintInfo;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
