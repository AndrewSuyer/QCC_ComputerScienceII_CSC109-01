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
bool suite_ItemNodeTest_init = false;
#include "../ItemNodeTest.h"

static ItemNodeTest suite_ItemNodeTest;

static CxxTest::List Tests_ItemNodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ItemNodeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/8.22_GroceryShoppingList2/ItemNodeTest.h", 15, "ItemNodeTest", suite_ItemNodeTest, Tests_ItemNodeTest );

static class TestDescription_suite_ItemNodeTest_testFUNCTION : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ItemNodeTest_testFUNCTION() : CxxTest::RealTestDescription( Tests_ItemNodeTest, suiteDescription_ItemNodeTest, 27, "testFUNCTION" ) {}
 void runTest() { suite_ItemNodeTest.testFUNCTION(); }
} testDescription_suite_ItemNodeTest_testFUNCTION;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
