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
bool suite_AccountTest_init = false;
#include "../AccountTest.h"

static AccountTest suite_AccountTest;

static CxxTest::List Tests_AccountTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AccountTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch10Exam_Account/AccountTest.h", 16, "AccountTest", suite_AccountTest, Tests_AccountTest );

static class TestDescription_suite_AccountTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AccountTest_testAll() : CxxTest::RealTestDescription( Tests_AccountTest, suiteDescription_AccountTest, 28, "testAll" ) {}
 void runTest() { suite_AccountTest.testAll(); }
} testDescription_suite_AccountTest_testAll;

#include "../CheckingTest.h"

static CheckingTest suite_CheckingTest;

static CxxTest::List Tests_CheckingTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CheckingTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch10Exam_Account/CheckingTest.h", 16, "CheckingTest", suite_CheckingTest, Tests_CheckingTest );

static class TestDescription_suite_CheckingTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CheckingTest_testAll() : CxxTest::RealTestDescription( Tests_CheckingTest, suiteDescription_CheckingTest, 28, "testAll" ) {}
 void runTest() { suite_CheckingTest.testAll(); }
} testDescription_suite_CheckingTest_testAll;

#include "../SavingsTest.h"

static SavingsTest suite_SavingsTest;

static CxxTest::List Tests_SavingsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SavingsTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch10Exam_Account/SavingsTest.h", 16, "SavingsTest", suite_SavingsTest, Tests_SavingsTest );

static class TestDescription_suite_SavingsTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SavingsTest_testAll() : CxxTest::RealTestDescription( Tests_SavingsTest, suiteDescription_SavingsTest, 28, "testAll" ) {}
 void runTest() { suite_SavingsTest.testAll(); }
} testDescription_suite_SavingsTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
