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
bool suite_InventoryNodeTest_init = false;
#include "../InventoryNodeTest.h"

static InventoryNodeTest suite_InventoryNodeTest;

static CxxTest::List Tests_InventoryNodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_InventoryNodeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/8.19_Inventory2/InventoryNodeTest.h", 16, "InventoryNodeTest", suite_InventoryNodeTest, Tests_InventoryNodeTest );

static class TestDescription_suite_InventoryNodeTest_testInsertAtFront : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_InventoryNodeTest_testInsertAtFront() : CxxTest::RealTestDescription( Tests_InventoryNodeTest, suiteDescription_InventoryNodeTest, 28, "testInsertAtFront" ) {}
 void runTest() { suite_InventoryNodeTest.testInsertAtFront(); }
} testDescription_suite_InventoryNodeTest_testInsertAtFront;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
