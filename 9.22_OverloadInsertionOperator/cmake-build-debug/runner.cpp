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
bool suite_NumberTest_init = false;
#include "../NumberTest.h"

static NumberTest suite_NumberTest;

static CxxTest::List Tests_NumberTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NumberTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/9.22_OverloadInsertionOperator/NumberTest.h", 16, "NumberTest", suite_NumberTest, Tests_NumberTest );

static class TestDescription_suite_NumberTest_testGetterAndSetter : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NumberTest_testGetterAndSetter() : CxxTest::RealTestDescription( Tests_NumberTest, suiteDescription_NumberTest, 28, "testGetterAndSetter" ) {}
 void runTest() { suite_NumberTest.testGetterAndSetter(); }
} testDescription_suite_NumberTest_testGetterAndSetter;

static class TestDescription_suite_NumberTest_testInsertionOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NumberTest_testInsertionOperator() : CxxTest::RealTestDescription( Tests_NumberTest, suiteDescription_NumberTest, 40, "testInsertionOperator" ) {}
 void runTest() { suite_NumberTest.testInsertionOperator(); }
} testDescription_suite_NumberTest_testInsertionOperator;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
