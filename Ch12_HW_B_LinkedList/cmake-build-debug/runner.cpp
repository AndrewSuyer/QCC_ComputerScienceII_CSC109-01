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
bool suite_CourseTest_init = false;
#include "../CourseTest.h"

static CourseTest suite_CourseTest;

static CxxTest::List Tests_CourseTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CourseTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch12_HW_B_LinkedList/CourseTest.h", 17, "CourseTest", suite_CourseTest, Tests_CourseTest );

static class TestDescription_suite_CourseTest_testOperators : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testOperators() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 29, "testOperators" ) {}
 void runTest() { suite_CourseTest.testOperators(); }
} testDescription_suite_CourseTest_testOperators;

static class TestDescription_suite_CourseTest_testDestructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testDestructor() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 55, "testDestructor" ) {}
 void runTest() { suite_CourseTest.testDestructor(); }
} testDescription_suite_CourseTest_testDestructor;

static class TestDescription_suite_CourseTest_testGettersAndSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CourseTest_testGettersAndSetters() : CxxTest::RealTestDescription( Tests_CourseTest, suiteDescription_CourseTest, 62, "testGettersAndSetters" ) {}
 void runTest() { suite_CourseTest.testGettersAndSetters(); }
} testDescription_suite_CourseTest_testGettersAndSetters;

#include "../NodeTest.h"

static NodeTest suite_NodeTest;

static CxxTest::List Tests_NodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NodeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch12_HW_B_LinkedList/NodeTest.h", 16, "NodeTest", suite_NodeTest, Tests_NodeTest );

static class TestDescription_suite_NodeTest_testGettersAndSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NodeTest_testGettersAndSetters() : CxxTest::RealTestDescription( Tests_NodeTest, suiteDescription_NodeTest, 28, "testGettersAndSetters" ) {}
 void runTest() { suite_NodeTest.testGettersAndSetters(); }
} testDescription_suite_NodeTest_testGettersAndSetters;

static class TestDescription_suite_NodeTest_testListConstruction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NodeTest_testListConstruction() : CxxTest::RealTestDescription( Tests_NodeTest, suiteDescription_NodeTest, 47, "testListConstruction" ) {}
 void runTest() { suite_NodeTest.testListConstruction(); }
} testDescription_suite_NodeTest_testListConstruction;

#include "../Single_Linked_ListTest.h"

static Single_Linked_ListTest suite_Single_Linked_ListTest;

static CxxTest::List Tests_Single_Linked_ListTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Single_Linked_ListTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/Ch12_HW_B_LinkedList/Single_Linked_ListTest.h", 17, "Single_Linked_ListTest", suite_Single_Linked_ListTest, Tests_Single_Linked_ListTest );

static class TestDescription_suite_Single_Linked_ListTest_testBasics : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Single_Linked_ListTest_testBasics() : CxxTest::RealTestDescription( Tests_Single_Linked_ListTest, suiteDescription_Single_Linked_ListTest, 29, "testBasics" ) {}
 void runTest() { suite_Single_Linked_ListTest.testBasics(); }
} testDescription_suite_Single_Linked_ListTest_testBasics;

static class TestDescription_suite_Single_Linked_ListTest_testPushers : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Single_Linked_ListTest_testPushers() : CxxTest::RealTestDescription( Tests_Single_Linked_ListTest, suiteDescription_Single_Linked_ListTest, 99, "testPushers" ) {}
 void runTest() { suite_Single_Linked_ListTest.testPushers(); }
} testDescription_suite_Single_Linked_ListTest_testPushers;

static class TestDescription_suite_Single_Linked_ListTest_testRemove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Single_Linked_ListTest_testRemove() : CxxTest::RealTestDescription( Tests_Single_Linked_ListTest, suiteDescription_Single_Linked_ListTest, 119, "testRemove" ) {}
 void runTest() { suite_Single_Linked_ListTest.testRemove(); }
} testDescription_suite_Single_Linked_ListTest_testRemove;

static class TestDescription_suite_Single_Linked_ListTest_testSortedInsert : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Single_Linked_ListTest_testSortedInsert() : CxxTest::RealTestDescription( Tests_Single_Linked_ListTest, suiteDescription_Single_Linked_ListTest, 144, "testSortedInsert" ) {}
 void runTest() { suite_Single_Linked_ListTest.testSortedInsert(); }
} testDescription_suite_Single_Linked_ListTest_testSortedInsert;

static class TestDescription_suite_Single_Linked_ListTest_testExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Single_Linked_ListTest_testExceptions() : CxxTest::RealTestDescription( Tests_Single_Linked_ListTest, suiteDescription_Single_Linked_ListTest, 163, "testExceptions" ) {}
 void runTest() { suite_Single_Linked_ListTest.testExceptions(); }
} testDescription_suite_Single_Linked_ListTest_testExceptions;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
