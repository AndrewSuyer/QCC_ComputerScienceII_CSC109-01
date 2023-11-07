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
bool suite_BookTest_init = false;
#include "../BookTest.h"

static BookTest suite_BookTest;

static CxxTest::List Tests_BookTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BookTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.16_BookInformation/BookTest.h", 17, "BookTest", suite_BookTest, Tests_BookTest );

static class TestDescription_suite_BookTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookTest_testAll() : CxxTest::RealTestDescription( Tests_BookTest, suiteDescription_BookTest, 29, "testAll" ) {}
 void runTest() { suite_BookTest.testAll(); }
} testDescription_suite_BookTest_testAll;

#include "../EncyclopediaTest.h"

static EncyclopediaTest suite_EncyclopediaTest;

static CxxTest::List Tests_EncyclopediaTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EncyclopediaTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.16_BookInformation/EncyclopediaTest.h", 17, "EncyclopediaTest", suite_EncyclopediaTest, Tests_EncyclopediaTest );

static class TestDescription_suite_EncyclopediaTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EncyclopediaTest_testAll() : CxxTest::RealTestDescription( Tests_EncyclopediaTest, suiteDescription_EncyclopediaTest, 29, "testAll" ) {}
 void runTest() { suite_EncyclopediaTest.testAll(); }
} testDescription_suite_EncyclopediaTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
