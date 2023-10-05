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
bool suite_newCxxTest_init = false;
#include "../newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.30_CarValue/newCxxTest.h", 23, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testGetModelYear : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testGetModelYear() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 36, "testGetModelYear" ) {}
 void runTest() { suite_newCxxTest.testGetModelYear(); }
} testDescription_suite_newCxxTest_testGetModelYear;

static class TestDescription_suite_newCxxTest_testGetPurchasePrice : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testGetPurchasePrice() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 43, "testGetPurchasePrice" ) {}
 void runTest() { suite_newCxxTest.testGetPurchasePrice(); }
} testDescription_suite_newCxxTest_testGetPurchasePrice;

static class TestDescription_suite_newCxxTest_testPrintInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testPrintInfo() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 50, "testPrintInfo" ) {}
 void runTest() { suite_newCxxTest.testPrintInfo(); }
} testDescription_suite_newCxxTest_testPrintInfo;

static class TestDescription_suite_newCxxTest_testCalcCurrentValue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testCalcCurrentValue() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 57, "testCalcCurrentValue" ) {}
 void runTest() { suite_newCxxTest.testCalcCurrentValue(); }
} testDescription_suite_newCxxTest_testCalcCurrentValue;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
