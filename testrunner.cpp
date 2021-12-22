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
bool suite_MyTestSuite_init = false;
#include "complexTests.cpp"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "complexTests.cpp", 6, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testDefaultConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDefaultConstructor() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 14, "testDefaultConstructor" ) {}
 void runTest() { suite_MyTestSuite.testDefaultConstructor(); }
} testDescription_suite_MyTestSuite_testDefaultConstructor;

static class TestDescription_suite_MyTestSuite_testOneParamConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOneParamConstructor() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 20, "testOneParamConstructor" ) {}
 void runTest() { suite_MyTestSuite.testOneParamConstructor(); }
} testDescription_suite_MyTestSuite_testOneParamConstructor;

static class TestDescription_suite_MyTestSuite_testTwoParamConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testTwoParamConstructor() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 26, "testTwoParamConstructor" ) {}
 void runTest() { suite_MyTestSuite.testTwoParamConstructor(); }
} testDescription_suite_MyTestSuite_testTwoParamConstructor;

static class TestDescription_suite_MyTestSuite_testCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCopyConstructor() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 32, "testCopyConstructor" ) {}
 void runTest() { suite_MyTestSuite.testCopyConstructor(); }
} testDescription_suite_MyTestSuite_testCopyConstructor;

static class TestDescription_suite_MyTestSuite_testassignmentEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testassignmentEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 39, "testassignmentEqual" ) {}
 void runTest() { suite_MyTestSuite.testassignmentEqual(); }
} testDescription_suite_MyTestSuite_testassignmentEqual;

static class TestDescription_suite_MyTestSuite_testplusEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testplusEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 47, "testplusEqual" ) {}
 void runTest() { suite_MyTestSuite.testplusEqual(); }
} testDescription_suite_MyTestSuite_testplusEqual;

static class TestDescription_suite_MyTestSuite_testminusEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testminusEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 57, "testminusEqual" ) {}
 void runTest() { suite_MyTestSuite.testminusEqual(); }
} testDescription_suite_MyTestSuite_testminusEqual;

static class TestDescription_suite_MyTestSuite_testtimesEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testtimesEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 67, "testtimesEqual" ) {}
 void runTest() { suite_MyTestSuite.testtimesEqual(); }
} testDescription_suite_MyTestSuite_testtimesEqual;

static class TestDescription_suite_MyTestSuite_testDivEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDivEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 81, "testDivEqual" ) {}
 void runTest() { suite_MyTestSuite.testDivEqual(); }
} testDescription_suite_MyTestSuite_testDivEqual;

static class TestDescription_suite_MyTestSuite_testUnaryOperators : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testUnaryOperators() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 97, "testUnaryOperators" ) {}
 void runTest() { suite_MyTestSuite.testUnaryOperators(); }
} testDescription_suite_MyTestSuite_testUnaryOperators;

static class TestDescription_suite_MyTestSuite_testBinaryPlus : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBinaryPlus() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 112, "testBinaryPlus" ) {}
 void runTest() { suite_MyTestSuite.testBinaryPlus(); }
} testDescription_suite_MyTestSuite_testBinaryPlus;

static class TestDescription_suite_MyTestSuite_testBinaryMinus : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBinaryMinus() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 120, "testBinaryMinus" ) {}
 void runTest() { suite_MyTestSuite.testBinaryMinus(); }
} testDescription_suite_MyTestSuite_testBinaryMinus;

static class TestDescription_suite_MyTestSuite_testMult : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMult() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 127, "testMult" ) {}
 void runTest() { suite_MyTestSuite.testMult(); }
} testDescription_suite_MyTestSuite_testMult;

static class TestDescription_suite_MyTestSuite_testDiv : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDiv() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 136, "testDiv" ) {}
 void runTest() { suite_MyTestSuite.testDiv(); }
} testDescription_suite_MyTestSuite_testDiv;

static class TestDescription_suite_MyTestSuite_testAbs : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAbs() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 145, "testAbs" ) {}
 void runTest() { suite_MyTestSuite.testAbs(); }
} testDescription_suite_MyTestSuite_testAbs;

static class TestDescription_suite_MyTestSuite_testNotEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testNotEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 157, "testNotEqual" ) {}
 void runTest() { suite_MyTestSuite.testNotEqual(); }
} testDescription_suite_MyTestSuite_testNotEqual;

static class TestDescription_suite_MyTestSuite_testMathExpressions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMathExpressions() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 170, "testMathExpressions" ) {}
 void runTest() { suite_MyTestSuite.testMathExpressions(); }
} testDescription_suite_MyTestSuite_testMathExpressions;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
