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
bool suite_ItemToPurchaseTest_init = false;
#include "../ItemToPurchaseTest.h"

static ItemToPurchaseTest suite_ItemToPurchaseTest;

static CxxTest::List Tests_ItemToPurchaseTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ItemToPurchaseTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.38_OnlineShoppingCart_P1/ItemToPurchaseTest.h", 15, "ItemToPurchaseTest", suite_ItemToPurchaseTest, Tests_ItemToPurchaseTest );

static class TestDescription_suite_ItemToPurchaseTest_testGetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ItemToPurchaseTest_testGetters() : CxxTest::RealTestDescription( Tests_ItemToPurchaseTest, suiteDescription_ItemToPurchaseTest, 48, "testGetters" ) {}
 void runTest() { suite_ItemToPurchaseTest.testGetters(); }
} testDescription_suite_ItemToPurchaseTest_testGetters;

static class TestDescription_suite_ItemToPurchaseTest_testPrinters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ItemToPurchaseTest_testPrinters() : CxxTest::RealTestDescription( Tests_ItemToPurchaseTest, suiteDescription_ItemToPurchaseTest, 71, "testPrinters" ) {}
 void runTest() { suite_ItemToPurchaseTest.testPrinters(); }
} testDescription_suite_ItemToPurchaseTest_testPrinters;

#include "../ShoppingCartTest.h"

static ShoppingCartTest suite_ShoppingCartTest;

static CxxTest::List Tests_ShoppingCartTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ShoppingCartTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.38_OnlineShoppingCart_P1/ShoppingCartTest.h", 17, "ShoppingCartTest", suite_ShoppingCartTest, Tests_ShoppingCartTest );

static class TestDescription_suite_ShoppingCartTest_testGetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShoppingCartTest_testGetters() : CxxTest::RealTestDescription( Tests_ShoppingCartTest, suiteDescription_ShoppingCartTest, 30, "testGetters" ) {}
 void runTest() { suite_ShoppingCartTest.testGetters(); }
} testDescription_suite_ShoppingCartTest_testGetters;

static class TestDescription_suite_ShoppingCartTest_testAddItems : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShoppingCartTest_testAddItems() : CxxTest::RealTestDescription( Tests_ShoppingCartTest, suiteDescription_ShoppingCartTest, 44, "testAddItems" ) {}
 void runTest() { suite_ShoppingCartTest.testAddItems(); }
} testDescription_suite_ShoppingCartTest_testAddItems;

static class TestDescription_suite_ShoppingCartTest_testRemoveItems : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShoppingCartTest_testRemoveItems() : CxxTest::RealTestDescription( Tests_ShoppingCartTest, suiteDescription_ShoppingCartTest, 57, "testRemoveItems" ) {}
 void runTest() { suite_ShoppingCartTest.testRemoveItems(); }
} testDescription_suite_ShoppingCartTest_testRemoveItems;

static class TestDescription_suite_ShoppingCartTest_testModifyItem : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShoppingCartTest_testModifyItem() : CxxTest::RealTestDescription( Tests_ShoppingCartTest, suiteDescription_ShoppingCartTest, 70, "testModifyItem" ) {}
 void runTest() { suite_ShoppingCartTest.testModifyItem(); }
} testDescription_suite_ShoppingCartTest_testModifyItem;

static class TestDescription_suite_ShoppingCartTest_testPrinters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShoppingCartTest_testPrinters() : CxxTest::RealTestDescription( Tests_ShoppingCartTest, suiteDescription_ShoppingCartTest, 88, "testPrinters" ) {}
 void runTest() { suite_ShoppingCartTest.testPrinters(); }
} testDescription_suite_ShoppingCartTest_testPrinters;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
