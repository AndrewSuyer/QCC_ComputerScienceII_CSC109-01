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
bool suite_FoodItemTest_init = false;
#include "../FoodItemTest.h"

static FoodItemTest suite_FoodItemTest;

static CxxTest::List Tests_FoodItemTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FoodItemTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.32_NutritionalInformation/FoodItemTest.h", 18, "FoodItemTest", suite_FoodItemTest, Tests_FoodItemTest );

static class TestDescription_suite_FoodItemTest_testGetName : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FoodItemTest_testGetName() : CxxTest::RealTestDescription( Tests_FoodItemTest, suiteDescription_FoodItemTest, 36, "testGetName" ) {}
 void runTest() { suite_FoodItemTest.testGetName(); }
} testDescription_suite_FoodItemTest_testGetName;

static class TestDescription_suite_FoodItemTest_testGetFat : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FoodItemTest_testGetFat() : CxxTest::RealTestDescription( Tests_FoodItemTest, suiteDescription_FoodItemTest, 41, "testGetFat" ) {}
 void runTest() { suite_FoodItemTest.testGetFat(); }
} testDescription_suite_FoodItemTest_testGetFat;

static class TestDescription_suite_FoodItemTest_testGetCarbs : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FoodItemTest_testGetCarbs() : CxxTest::RealTestDescription( Tests_FoodItemTest, suiteDescription_FoodItemTest, 46, "testGetCarbs" ) {}
 void runTest() { suite_FoodItemTest.testGetCarbs(); }
} testDescription_suite_FoodItemTest_testGetCarbs;

static class TestDescription_suite_FoodItemTest_testGetProtein : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FoodItemTest_testGetProtein() : CxxTest::RealTestDescription( Tests_FoodItemTest, suiteDescription_FoodItemTest, 51, "testGetProtein" ) {}
 void runTest() { suite_FoodItemTest.testGetProtein(); }
} testDescription_suite_FoodItemTest_testGetProtein;

static class TestDescription_suite_FoodItemTest_testGetCalories : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FoodItemTest_testGetCalories() : CxxTest::RealTestDescription( Tests_FoodItemTest, suiteDescription_FoodItemTest, 56, "testGetCalories" ) {}
 void runTest() { suite_FoodItemTest.testGetCalories(); }
} testDescription_suite_FoodItemTest_testGetCalories;

static class TestDescription_suite_FoodItemTest_testPrintInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FoodItemTest_testPrintInfo() : CxxTest::RealTestDescription( Tests_FoodItemTest, suiteDescription_FoodItemTest, 63, "testPrintInfo" ) {}
 void runTest() { suite_FoodItemTest.testPrintInfo(); }
} testDescription_suite_FoodItemTest_testPrintInfo;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
