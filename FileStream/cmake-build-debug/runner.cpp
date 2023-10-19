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
bool suite_ManageTeamsTest_init = false;
#include "../ManageTeamsTest.h"

static ManageTeamsTest suite_ManageTeamsTest;

static CxxTest::List Tests_ManageTeamsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ManageTeamsTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/FileStream/ManageTeamsTest.h", 16, "ManageTeamsTest", suite_ManageTeamsTest, Tests_ManageTeamsTest );

static class TestDescription_suite_ManageTeamsTest_testFUNCTION : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ManageTeamsTest_testFUNCTION() : CxxTest::RealTestDescription( Tests_ManageTeamsTest, suiteDescription_ManageTeamsTest, 28, "testFUNCTION" ) {}
 void runTest() { suite_ManageTeamsTest.testFUNCTION(); }
} testDescription_suite_ManageTeamsTest_testFUNCTION;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
