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
bool suite_TwoDArrayTest_init = false;
#include "../TwoDArrayTest.h"

static TwoDArrayTest suite_TwoDArrayTest;

static CxxTest::List Tests_TwoDArrayTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TwoDArrayTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/6.72_2DArrayPointers/TwoDArrayTest.h", 20, "TwoDArrayTest", suite_TwoDArrayTest, Tests_TwoDArrayTest );

static class TestDescription_suite_TwoDArrayTest_testSetRow : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TwoDArrayTest_testSetRow() : CxxTest::RealTestDescription( Tests_TwoDArrayTest, suiteDescription_TwoDArrayTest, 32, "testSetRow" ) {}
 void runTest() { suite_TwoDArrayTest.testSetRow(); }
} testDescription_suite_TwoDArrayTest_testSetRow;

static class TestDescription_suite_TwoDArrayTest_testGetRow : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TwoDArrayTest_testGetRow() : CxxTest::RealTestDescription( Tests_TwoDArrayTest, suiteDescription_TwoDArrayTest, 59, "testGetRow" ) {}
 void runTest() { suite_TwoDArrayTest.testGetRow(); }
} testDescription_suite_TwoDArrayTest_testGetRow;

static class TestDescription_suite_TwoDArrayTest_testSetElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TwoDArrayTest_testSetElement() : CxxTest::RealTestDescription( Tests_TwoDArrayTest, suiteDescription_TwoDArrayTest, 77, "testSetElement" ) {}
 void runTest() { suite_TwoDArrayTest.testSetElement(); }
} testDescription_suite_TwoDArrayTest_testSetElement;

static class TestDescription_suite_TwoDArrayTest_testGetElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TwoDArrayTest_testGetElement() : CxxTest::RealTestDescription( Tests_TwoDArrayTest, suiteDescription_TwoDArrayTest, 97, "testGetElement" ) {}
 void runTest() { suite_TwoDArrayTest.testGetElement(); }
} testDescription_suite_TwoDArrayTest_testGetElement;

static class TestDescription_suite_TwoDArrayTest_testSum : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TwoDArrayTest_testSum() : CxxTest::RealTestDescription( Tests_TwoDArrayTest, suiteDescription_TwoDArrayTest, 109, "testSum" ) {}
 void runTest() { suite_TwoDArrayTest.testSum(); }
} testDescription_suite_TwoDArrayTest_testSum;

static class TestDescription_suite_TwoDArrayTest_testFindMaxMin : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TwoDArrayTest_testFindMaxMin() : CxxTest::RealTestDescription( Tests_TwoDArrayTest, suiteDescription_TwoDArrayTest, 119, "testFindMaxMin" ) {}
 void runTest() { suite_TwoDArrayTest.testFindMaxMin(); }
} testDescription_suite_TwoDArrayTest_testFindMaxMin;

static class TestDescription_suite_TwoDArrayTest_testToString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TwoDArrayTest_testToString() : CxxTest::RealTestDescription( Tests_TwoDArrayTest, suiteDescription_TwoDArrayTest, 130, "testToString" ) {}
 void runTest() { suite_TwoDArrayTest.testToString(); }
} testDescription_suite_TwoDArrayTest_testToString;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
