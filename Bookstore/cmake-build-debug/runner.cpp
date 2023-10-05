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
CxxTest::StaticSuiteDescription suiteDescription_BookTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Bookstore/BookTest.h", 15, "BookTest", suite_BookTest, Tests_BookTest );

static class TestDescription_suite_BookTest_testGettersAndSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookTest_testGettersAndSetters() : CxxTest::RealTestDescription( Tests_BookTest, suiteDescription_BookTest, 27, "testGettersAndSetters" ) {}
 void runTest() { suite_BookTest.testGettersAndSetters(); }
} testDescription_suite_BookTest_testGettersAndSetters;

static class TestDescription_suite_BookTest_testPrintInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookTest_testPrintInfo() : CxxTest::RealTestDescription( Tests_BookTest, suiteDescription_BookTest, 53, "testPrintInfo" ) {}
 void runTest() { suite_BookTest.testPrintInfo(); }
} testDescription_suite_BookTest_testPrintInfo;

static class TestDescription_suite_BookTest_testComparisonOperators : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookTest_testComparisonOperators() : CxxTest::RealTestDescription( Tests_BookTest, suiteDescription_BookTest, 62, "testComparisonOperators" ) {}
 void runTest() { suite_BookTest.testComparisonOperators(); }
} testDescription_suite_BookTest_testComparisonOperators;

#include "../BookstoreTest.h"

static BookstoreTest suite_BookstoreTest;

static CxxTest::List Tests_BookstoreTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BookstoreTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Bookstore/BookstoreTest.h", 15, "BookstoreTest", suite_BookstoreTest, Tests_BookstoreTest );

static class TestDescription_suite_BookstoreTest_testGettersAndSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookstoreTest_testGettersAndSetters() : CxxTest::RealTestDescription( Tests_BookstoreTest, suiteDescription_BookstoreTest, 27, "testGettersAndSetters" ) {}
 void runTest() { suite_BookstoreTest.testGettersAndSetters(); }
} testDescription_suite_BookstoreTest_testGettersAndSetters;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
