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
bool suite_TeamTest_init = false;
#include "../TeamTest.h"

static TeamTest suite_TeamTest;

static CxxTest::List Tests_TeamTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TeamTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.31_WinningTeam/TeamTest.h", 18, "TeamTest", suite_TeamTest, Tests_TeamTest );

static class TestDescription_suite_TeamTest_testGetName : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TeamTest_testGetName() : CxxTest::RealTestDescription( Tests_TeamTest, suiteDescription_TeamTest, 32, "testGetName" ) {}
 void runTest() { suite_TeamTest.testGetName(); }
} testDescription_suite_TeamTest_testGetName;

static class TestDescription_suite_TeamTest_testGetWins : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TeamTest_testGetWins() : CxxTest::RealTestDescription( Tests_TeamTest, suiteDescription_TeamTest, 39, "testGetWins" ) {}
 void runTest() { suite_TeamTest.testGetWins(); }
} testDescription_suite_TeamTest_testGetWins;

static class TestDescription_suite_TeamTest_testGetLosses : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TeamTest_testGetLosses() : CxxTest::RealTestDescription( Tests_TeamTest, suiteDescription_TeamTest, 46, "testGetLosses" ) {}
 void runTest() { suite_TeamTest.testGetLosses(); }
} testDescription_suite_TeamTest_testGetLosses;

static class TestDescription_suite_TeamTest_testGetWinPrecentage : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TeamTest_testGetWinPrecentage() : CxxTest::RealTestDescription( Tests_TeamTest, suiteDescription_TeamTest, 53, "testGetWinPrecentage" ) {}
 void runTest() { suite_TeamTest.testGetWinPrecentage(); }
} testDescription_suite_TeamTest_testGetWinPrecentage;

static class TestDescription_suite_TeamTest_testPrintStanding : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TeamTest_testPrintStanding() : CxxTest::RealTestDescription( Tests_TeamTest, suiteDescription_TeamTest, 62, "testPrintStanding" ) {}
 void runTest() { suite_TeamTest.testPrintStanding(); }
} testDescription_suite_TeamTest_testPrintStanding;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
