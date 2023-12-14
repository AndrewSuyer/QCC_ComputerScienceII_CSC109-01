/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
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
bool suite_MileageTrackerTest_init = false;
#include "../MileageTrackerTest.h"

static MileageTrackerTest suite_MileageTrackerTest;

static CxxTest::List Tests_MileageTrackerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MileageTrackerTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch12Exam/MileageTrackerTest.h", 16, "MileageTrackerTest", suite_MileageTrackerTest, Tests_MileageTrackerTest );

static class TestDescription_suite_MileageTrackerTest_testGettersAndSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MileageTrackerTest_testGettersAndSetters() : CxxTest::RealTestDescription( Tests_MileageTrackerTest, suiteDescription_MileageTrackerTest, 28, "testGettersAndSetters" ) {}
 void runTest() { suite_MileageTrackerTest.testGettersAndSetters(); }
} testDescription_suite_MileageTrackerTest_testGettersAndSetters;

static class TestDescription_suite_MileageTrackerTest_testAddMiles : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MileageTrackerTest_testAddMiles() : CxxTest::RealTestDescription( Tests_MileageTrackerTest, suiteDescription_MileageTrackerTest, 43, "testAddMiles" ) {}
 void runTest() { suite_MileageTrackerTest.testAddMiles(); }
} testDescription_suite_MileageTrackerTest_testAddMiles;

#include "../UberTest.h"

static UberTest suite_UberTest;

static CxxTest::List Tests_UberTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_UberTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch12Exam/UberTest.h", 16, "UberTest", suite_UberTest, Tests_UberTest );

static class TestDescription_suite_UberTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_UberTest_testAll() : CxxTest::RealTestDescription( Tests_UberTest, suiteDescription_UberTest, 28, "testAll" ) {}
 void runTest() { suite_UberTest.testAll(); }
} testDescription_suite_UberTest_testAll;

#include "../UberEatsTest.h"

static UberEatsTest suite_UberEatsTest;

static CxxTest::List Tests_UberEatsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_UberEatsTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch12Exam/UberEatsTest.h", 16, "UberEatsTest", suite_UberEatsTest, Tests_UberEatsTest );

static class TestDescription_suite_UberEatsTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_UberEatsTest_testAll() : CxxTest::RealTestDescription( Tests_UberEatsTest, suiteDescription_UberEatsTest, 28, "testAll" ) {}
 void runTest() { suite_UberEatsTest.testAll(); }
} testDescription_suite_UberEatsTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
