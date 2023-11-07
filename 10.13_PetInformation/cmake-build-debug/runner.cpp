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
bool suite_PetTest_init = false;
#include "../PetTest.h"

static PetTest suite_PetTest;

static CxxTest::List Tests_PetTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PetTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.13_PetInformation/PetTest.h", 17, "PetTest", suite_PetTest, Tests_PetTest );

static class TestDescription_suite_PetTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PetTest_testAll() : CxxTest::RealTestDescription( Tests_PetTest, suiteDescription_PetTest, 29, "testAll" ) {}
 void runTest() { suite_PetTest.testAll(); }
} testDescription_suite_PetTest_testAll;

#include "../CatTest.h"

static CatTest suite_CatTest;

static CxxTest::List Tests_CatTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CatTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.13_PetInformation/CatTest.h", 17, "CatTest", suite_CatTest, Tests_CatTest );

static class TestDescription_suite_CatTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CatTest_testAll() : CxxTest::RealTestDescription( Tests_CatTest, suiteDescription_CatTest, 29, "testAll" ) {}
 void runTest() { suite_CatTest.testAll(); }
} testDescription_suite_CatTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
