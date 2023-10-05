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
bool suite_MileageTrackerNodeTest_init = false;
#include "../MileageTrackerNodeTest.h"

static MileageTrackerNodeTest suite_MileageTrackerNodeTest;

static CxxTest::List Tests_MileageTrackerNodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MileageTrackerNodeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/8.17_MileageTracker/MileageTrackerNodeTest.h", 16, "MileageTrackerNodeTest", suite_MileageTrackerNodeTest, Tests_MileageTrackerNodeTest );

static class TestDescription_suite_MileageTrackerNodeTest_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MileageTrackerNodeTest_testConstructors() : CxxTest::RealTestDescription( Tests_MileageTrackerNodeTest, suiteDescription_MileageTrackerNodeTest, 28, "testConstructors" ) {}
 void runTest() { suite_MileageTrackerNodeTest.testConstructors(); }
} testDescription_suite_MileageTrackerNodeTest_testConstructors;

static class TestDescription_suite_MileageTrackerNodeTest_testInsertAfter : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MileageTrackerNodeTest_testInsertAfter() : CxxTest::RealTestDescription( Tests_MileageTrackerNodeTest, suiteDescription_MileageTrackerNodeTest, 48, "testInsertAfter" ) {}
 void runTest() { suite_MileageTrackerNodeTest.testInsertAfter(); }
} testDescription_suite_MileageTrackerNodeTest_testInsertAfter;

static class TestDescription_suite_MileageTrackerNodeTest_testPrintNodeData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MileageTrackerNodeTest_testPrintNodeData() : CxxTest::RealTestDescription( Tests_MileageTrackerNodeTest, suiteDescription_MileageTrackerNodeTest, 62, "testPrintNodeData" ) {}
 void runTest() { suite_MileageTrackerNodeTest.testPrintNodeData(); }
} testDescription_suite_MileageTrackerNodeTest_testPrintNodeData;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
