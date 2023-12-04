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
bool suite_ItemTest_init = false;
#include "../ItemTest.h"

static ItemTest suite_ItemTest;

static CxxTest::List Tests_ItemTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ItemTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch11Exam/ItemTest.h", 16, "ItemTest", suite_ItemTest, Tests_ItemTest );

static class TestDescription_suite_ItemTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ItemTest_testAll() : CxxTest::RealTestDescription( Tests_ItemTest, suiteDescription_ItemTest, 28, "testAll" ) {}
 void runTest() { suite_ItemTest.testAll(); }
} testDescription_suite_ItemTest_testAll;

#include "../ShoppingBagsTest.h"

static ShoppingBagsTest suite_ShoppingBagsTest;

static CxxTest::List Tests_ShoppingBagsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ShoppingBagsTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch11Exam/ShoppingBagsTest.h", 16, "ShoppingBagsTest", suite_ShoppingBagsTest, Tests_ShoppingBagsTest );

static class TestDescription_suite_ShoppingBagsTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShoppingBagsTest_testAll() : CxxTest::RealTestDescription( Tests_ShoppingBagsTest, suiteDescription_ShoppingBagsTest, 28, "testAll" ) {}
 void runTest() { suite_ShoppingBagsTest.testAll(); }
} testDescription_suite_ShoppingBagsTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
