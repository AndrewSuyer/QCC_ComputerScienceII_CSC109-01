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
bool suite_ArtistTest_init = false;
#include "../ArtistTest.h"

static ArtistTest suite_ArtistTest;

static CxxTest::List Tests_ArtistTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ArtistTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.33_ArtworkLabel/ArtistTest.h", 18, "ArtistTest", suite_ArtistTest, Tests_ArtistTest );

static class TestDescription_suite_ArtistTest_testPrintInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArtistTest_testPrintInfo() : CxxTest::RealTestDescription( Tests_ArtistTest, suiteDescription_ArtistTest, 48, "testPrintInfo" ) {}
 void runTest() { suite_ArtistTest.testPrintInfo(); }
} testDescription_suite_ArtistTest_testPrintInfo;

#include "../ArtworkTest.h"

static ArtworkTest suite_ArtworkTest;

static CxxTest::List Tests_ArtworkTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ArtworkTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/7.33_ArtworkLabel/ArtworkTest.h", 17, "ArtworkTest", suite_ArtworkTest, Tests_ArtworkTest );

static class TestDescription_suite_ArtworkTest_testPrintInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArtworkTest_testPrintInfo() : CxxTest::RealTestDescription( Tests_ArtworkTest, suiteDescription_ArtworkTest, 45, "testPrintInfo" ) {}
 void runTest() { suite_ArtworkTest.testPrintInfo(); }
} testDescription_suite_ArtworkTest_testPrintInfo;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
