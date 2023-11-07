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
bool suite_DateTest_init = false;
#include "../DateTest.h"

static DateTest suite_DateTest;

static CxxTest::List Tests_DateTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DateTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.11_Appointment/DateTest.h", 17, "DateTest", suite_DateTest, Tests_DateTest );

static class TestDescription_suite_DateTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DateTest_testAll() : CxxTest::RealTestDescription( Tests_DateTest, suiteDescription_DateTest, 29, "testAll" ) {}
 void runTest() { suite_DateTest.testAll(); }
} testDescription_suite_DateTest_testAll;

#include "../TimeTest.h"

static TimeTest suite_TimeTest;

static CxxTest::List Tests_TimeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.11_Appointment/TimeTest.h", 16, "TimeTest", suite_TimeTest, Tests_TimeTest );

static class TestDescription_suite_TimeTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeTest_testAll() : CxxTest::RealTestDescription( Tests_TimeTest, suiteDescription_TimeTest, 28, "testAll" ) {}
 void runTest() { suite_TimeTest.testAll(); }
} testDescription_suite_TimeTest_testAll;

#include "../DailyTest.h"

static DailyTest suite_DailyTest;

static CxxTest::List Tests_DailyTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DailyTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.11_Appointment/DailyTest.h", 16, "DailyTest", suite_DailyTest, Tests_DailyTest );

static class TestDescription_suite_DailyTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DailyTest_testAll() : CxxTest::RealTestDescription( Tests_DailyTest, suiteDescription_DailyTest, 28, "testAll" ) {}
 void runTest() { suite_DailyTest.testAll(); }
} testDescription_suite_DailyTest_testAll;

#include "../MonthlyTest.h"

static MonthlyTest suite_MonthlyTest;

static CxxTest::List Tests_MonthlyTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MonthlyTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.11_Appointment/MonthlyTest.h", 16, "MonthlyTest", suite_MonthlyTest, Tests_MonthlyTest );

static class TestDescription_suite_MonthlyTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MonthlyTest_testAll() : CxxTest::RealTestDescription( Tests_MonthlyTest, suiteDescription_MonthlyTest, 28, "testAll" ) {}
 void runTest() { suite_MonthlyTest.testAll(); }
} testDescription_suite_MonthlyTest_testAll;

#include "../OnetimeTest.h"

static OnetimeTest suite_OnetimeTest;

static CxxTest::List Tests_OnetimeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_OnetimeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.11_Appointment/OnetimeTest.h", 16, "OnetimeTest", suite_OnetimeTest, Tests_OnetimeTest );

static class TestDescription_suite_OnetimeTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_OnetimeTest_testAll() : CxxTest::RealTestDescription( Tests_OnetimeTest, suiteDescription_OnetimeTest, 28, "testAll" ) {}
 void runTest() { suite_OnetimeTest.testAll(); }
} testDescription_suite_OnetimeTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
