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
bool suite_FlowerTest_init = false;
#include "../FlowerTest.h"

static FlowerTest suite_FlowerTest;

static CxxTest::List Tests_FlowerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FlowerTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.17_PlantInformation/FlowerTest.h", 17, "FlowerTest", suite_FlowerTest, Tests_FlowerTest );

static class TestDescription_suite_FlowerTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FlowerTest_testAll() : CxxTest::RealTestDescription( Tests_FlowerTest, suiteDescription_FlowerTest, 29, "testAll" ) {}
 void runTest() { suite_FlowerTest.testAll(); }
} testDescription_suite_FlowerTest_testAll;

#include "../PlantTest.h"

static PlantTest suite_PlantTest;

static CxxTest::List Tests_PlantTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PlantTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.17_PlantInformation/PlantTest.h", 17, "PlantTest", suite_PlantTest, Tests_PlantTest );

static class TestDescription_suite_PlantTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlantTest_testAll() : CxxTest::RealTestDescription( Tests_PlantTest, suiteDescription_PlantTest, 29, "testAll" ) {}
 void runTest() { suite_PlantTest.testAll(); }
} testDescription_suite_PlantTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
