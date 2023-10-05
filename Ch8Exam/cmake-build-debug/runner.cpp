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
bool suite_NameNodeTest_init = false;
#include "../NameNodeTest.h"

static NameNodeTest suite_NameNodeTest;

static CxxTest::List Tests_NameNodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NameNodeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch8Exam/NameNodeTest.h", 16, "NameNodeTest", suite_NameNodeTest, Tests_NameNodeTest );

static class TestDescription_suite_NameNodeTest_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameNodeTest_testConstructors() : CxxTest::RealTestDescription( Tests_NameNodeTest, suiteDescription_NameNodeTest, 28, "testConstructors" ) {}
 void runTest() { suite_NameNodeTest.testConstructors(); }
} testDescription_suite_NameNodeTest_testConstructors;

static class TestDescription_suite_NameNodeTest_testSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameNodeTest_testSetters() : CxxTest::RealTestDescription( Tests_NameNodeTest, suiteDescription_NameNodeTest, 42, "testSetters" ) {}
 void runTest() { suite_NameNodeTest.testSetters(); }
} testDescription_suite_NameNodeTest_testSetters;

static class TestDescription_suite_NameNodeTest_testPrintdata : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameNodeTest_testPrintdata() : CxxTest::RealTestDescription( Tests_NameNodeTest, suiteDescription_NameNodeTest, 60, "testPrintdata" ) {}
 void runTest() { suite_NameNodeTest.testPrintdata(); }
} testDescription_suite_NameNodeTest_testPrintdata;

#include "../NameListTest.h"

static NameListTest suite_NameListTest;

static CxxTest::List Tests_NameListTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NameListTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch8Exam/NameListTest.h", 16, "NameListTest", suite_NameListTest, Tests_NameListTest );

static class TestDescription_suite_NameListTest_testConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameListTest_testConstructor() : CxxTest::RealTestDescription( Tests_NameListTest, suiteDescription_NameListTest, 28, "testConstructor" ) {}
 void runTest() { suite_NameListTest.testConstructor(); }
} testDescription_suite_NameListTest_testConstructor;

static class TestDescription_suite_NameListTest_testCopyConstructorAndOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameListTest_testCopyConstructorAndOperator() : CxxTest::RealTestDescription( Tests_NameListTest, suiteDescription_NameListTest, 36, "testCopyConstructorAndOperator" ) {}
 void runTest() { suite_NameListTest.testCopyConstructorAndOperator(); }
} testDescription_suite_NameListTest_testCopyConstructorAndOperator;

static class TestDescription_suite_NameListTest_testPushFront : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameListTest_testPushFront() : CxxTest::RealTestDescription( Tests_NameListTest, suiteDescription_NameListTest, 62, "testPushFront" ) {}
 void runTest() { suite_NameListTest.testPushFront(); }
} testDescription_suite_NameListTest_testPushFront;

static class TestDescription_suite_NameListTest_testPushBack : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameListTest_testPushBack() : CxxTest::RealTestDescription( Tests_NameListTest, suiteDescription_NameListTest, 86, "testPushBack" ) {}
 void runTest() { suite_NameListTest.testPushBack(); }
} testDescription_suite_NameListTest_testPushBack;

static class TestDescription_suite_NameListTest_testPrint : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NameListTest_testPrint() : CxxTest::RealTestDescription( Tests_NameListTest, suiteDescription_NameListTest, 110, "testPrint" ) {}
 void runTest() { suite_NameListTest.testPrint(); }
} testDescription_suite_NameListTest_testPrint;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
