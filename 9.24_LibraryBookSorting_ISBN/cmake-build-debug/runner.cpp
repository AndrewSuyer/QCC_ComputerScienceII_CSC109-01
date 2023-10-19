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
CxxTest::StaticSuiteDescription suiteDescription_BookTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/9.24_LibraryBookSorting_ISBN/BookTest.h", 17, "BookTest", suite_BookTest, Tests_BookTest );

static class TestDescription_suite_BookTest_testBook : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookTest_testBook() : CxxTest::RealTestDescription( Tests_BookTest, suiteDescription_BookTest, 29, "testBook" ) {}
 void runTest() { suite_BookTest.testBook(); }
} testDescription_suite_BookTest_testBook;

#include "../BookNodeTest.h"

static BookNodeTest suite_BookNodeTest;

static CxxTest::List Tests_BookNodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BookNodeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/9.24_LibraryBookSorting_ISBN/BookNodeTest.h", 17, "BookNodeTest", suite_BookNodeTest, Tests_BookNodeTest );

static class TestDescription_suite_BookNodeTest_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookNodeTest_testConstructors() : CxxTest::RealTestDescription( Tests_BookNodeTest, suiteDescription_BookNodeTest, 29, "testConstructors" ) {}
 void runTest() { suite_BookNodeTest.testConstructors(); }
} testDescription_suite_BookNodeTest_testConstructors;

static class TestDescription_suite_BookNodeTest_testListConstruction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookNodeTest_testListConstruction() : CxxTest::RealTestDescription( Tests_BookNodeTest, suiteDescription_BookNodeTest, 44, "testListConstruction" ) {}
 void runTest() { suite_BookNodeTest.testListConstruction(); }
} testDescription_suite_BookNodeTest_testListConstruction;

static class TestDescription_suite_BookNodeTest_testPrintBookInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BookNodeTest_testPrintBookInfo() : CxxTest::RealTestDescription( Tests_BookNodeTest, suiteDescription_BookNodeTest, 65, "testPrintBookInfo" ) {}
 void runTest() { suite_BookNodeTest.testPrintBookInfo(); }
} testDescription_suite_BookNodeTest_testPrintBookInfo;

#include "../LinkedListLibraryTest.h"

static LinkedListLibraryTest suite_LinkedListLibraryTest;

static CxxTest::List Tests_LinkedListLibraryTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LinkedListLibraryTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/9.24_LibraryBookSorting_ISBN/LinkedListLibraryTest.h", 19, "LinkedListLibraryTest", suite_LinkedListLibraryTest, Tests_LinkedListLibraryTest );

static class TestDescription_suite_LinkedListLibraryTest_testConstructorDestructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LinkedListLibraryTest_testConstructorDestructor() : CxxTest::RealTestDescription( Tests_LinkedListLibraryTest, suiteDescription_LinkedListLibraryTest, 31, "testConstructorDestructor" ) {}
 void runTest() { suite_LinkedListLibraryTest.testConstructorDestructor(); }
} testDescription_suite_LinkedListLibraryTest_testConstructorDestructor;

static class TestDescription_suite_LinkedListLibraryTest_testInsertSorted : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LinkedListLibraryTest_testInsertSorted() : CxxTest::RealTestDescription( Tests_LinkedListLibraryTest, suiteDescription_LinkedListLibraryTest, 37, "testInsertSorted" ) {}
 void runTest() { suite_LinkedListLibraryTest.testInsertSorted(); }
} testDescription_suite_LinkedListLibraryTest_testInsertSorted;

static class TestDescription_suite_LinkedListLibraryTest_testLoading100Books : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LinkedListLibraryTest_testLoading100Books() : CxxTest::RealTestDescription( Tests_LinkedListLibraryTest, suiteDescription_LinkedListLibraryTest, 65, "testLoading100Books" ) {}
 void runTest() { suite_LinkedListLibraryTest.testLoading100Books(); }
} testDescription_suite_LinkedListLibraryTest_testLoading100Books;

#include "../VectorLibraryTest.h"

static VectorLibraryTest suite_VectorLibraryTest;

static CxxTest::List Tests_VectorLibraryTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_VectorLibraryTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/9.24_LibraryBookSorting_ISBN/VectorLibraryTest.h", 18, "VectorLibraryTest", suite_VectorLibraryTest, Tests_VectorLibraryTest );

static class TestDescription_suite_VectorLibraryTest_testInsertSorted : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorLibraryTest_testInsertSorted() : CxxTest::RealTestDescription( Tests_VectorLibraryTest, suiteDescription_VectorLibraryTest, 30, "testInsertSorted" ) {}
 void runTest() { suite_VectorLibraryTest.testInsertSorted(); }
} testDescription_suite_VectorLibraryTest_testInsertSorted;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
