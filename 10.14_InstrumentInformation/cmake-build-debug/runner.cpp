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
bool suite_InstrumentTest_init = false;
#include "../InstrumentTest.h"

static InstrumentTest suite_InstrumentTest;

static CxxTest::List Tests_InstrumentTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_InstrumentTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.14_InstrumentInformation/InstrumentTest.h", 17, "InstrumentTest", suite_InstrumentTest, Tests_InstrumentTest );

static class TestDescription_suite_InstrumentTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_InstrumentTest_testAll() : CxxTest::RealTestDescription( Tests_InstrumentTest, suiteDescription_InstrumentTest, 29, "testAll" ) {}
 void runTest() { suite_InstrumentTest.testAll(); }
} testDescription_suite_InstrumentTest_testAll;

#include "../StringInstrumentTest.h"

static StringInstrumentTest suite_StringInstrumentTest;

static CxxTest::List Tests_StringInstrumentTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StringInstrumentTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/10.14_InstrumentInformation/StringInstrumentTest.h", 17, "StringInstrumentTest", suite_StringInstrumentTest, Tests_StringInstrumentTest );

static class TestDescription_suite_StringInstrumentTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringInstrumentTest_testAll() : CxxTest::RealTestDescription( Tests_StringInstrumentTest, suiteDescription_StringInstrumentTest, 29, "testAll" ) {}
 void runTest() { suite_StringInstrumentTest.testAll(); }
} testDescription_suite_StringInstrumentTest_testAll;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
