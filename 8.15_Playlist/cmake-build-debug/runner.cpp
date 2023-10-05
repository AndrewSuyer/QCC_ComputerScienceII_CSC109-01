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
bool suite_PlaylistNodeTest_init = false;
#include "../PlaylistNodeTest.h"

static PlaylistNodeTest suite_PlaylistNodeTest;

static CxxTest::List Tests_PlaylistNodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PlaylistNodeTest( "/home/andrewsuyer/Documents/CodingProjects/C++/School/8.15_Playlist/PlaylistNodeTest.h", 16, "PlaylistNodeTest", suite_PlaylistNodeTest, Tests_PlaylistNodeTest );

static class TestDescription_suite_PlaylistNodeTest_testGetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlaylistNodeTest_testGetters() : CxxTest::RealTestDescription( Tests_PlaylistNodeTest, suiteDescription_PlaylistNodeTest, 28, "testGetters" ) {}
 void runTest() { suite_PlaylistNodeTest.testGetters(); }
} testDescription_suite_PlaylistNodeTest_testGetters;

static class TestDescription_suite_PlaylistNodeTest_testInserts : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlaylistNodeTest_testInserts() : CxxTest::RealTestDescription( Tests_PlaylistNodeTest, suiteDescription_PlaylistNodeTest, 46, "testInserts" ) {}
 void runTest() { suite_PlaylistNodeTest.testInserts(); }
} testDescription_suite_PlaylistNodeTest_testInserts;

static class TestDescription_suite_PlaylistNodeTest_testPrintPlaylistNode : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlaylistNodeTest_testPrintPlaylistNode() : CxxTest::RealTestDescription( Tests_PlaylistNodeTest, suiteDescription_PlaylistNodeTest, 78, "testPrintPlaylistNode" ) {}
 void runTest() { suite_PlaylistNodeTest.testPrintPlaylistNode(); }
} testDescription_suite_PlaylistNodeTest_testPrintPlaylistNode;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
