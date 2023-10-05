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
bool suite_TimerHrMinTest_init = false;
#include "../TimerHrMinTest.h"

static TimerHrMinTest suite_TimerHrMinTest;

static CxxTest::List Tests_TimerHrMinTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimerHrMinTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch7Exam_TimeHrMin/TimerHrMinTest.h", 16, "TimerHrMinTest", suite_TimerHrMinTest, Tests_TimerHrMinTest );

static class TestDescription_suite_TimerHrMinTest_testGetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerHrMinTest_testGetters() : CxxTest::RealTestDescription( Tests_TimerHrMinTest, suiteDescription_TimerHrMinTest, 28, "testGetters" ) {}
 void runTest() { suite_TimerHrMinTest.testGetters(); }
} testDescription_suite_TimerHrMinTest_testGetters;

static class TestDescription_suite_TimerHrMinTest_testSubtraction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerHrMinTest_testSubtraction() : CxxTest::RealTestDescription( Tests_TimerHrMinTest, suiteDescription_TimerHrMinTest, 40, "testSubtraction" ) {}
 void runTest() { suite_TimerHrMinTest.testSubtraction(); }
} testDescription_suite_TimerHrMinTest_testSubtraction;

static class TestDescription_suite_TimerHrMinTest_testComparison : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerHrMinTest_testComparison() : CxxTest::RealTestDescription( Tests_TimerHrMinTest, suiteDescription_TimerHrMinTest, 56, "testComparison" ) {}
 void runTest() { suite_TimerHrMinTest.testComparison(); }
} testDescription_suite_TimerHrMinTest_testComparison;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
