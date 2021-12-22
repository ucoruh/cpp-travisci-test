#include <cxxtest/TestSuite.h>

#include "complex.h"


class MyTestSuite : public CxxTest::TestSuite {
  public:
    void ASSERT_COMPLEX_EQUALS(Complex a, Complex b){
        double TOL = 1e-10;
        TS_ASSERT_EQUALS(abs(a.real()-b.real())<TOL,1);
        TS_ASSERT_EQUALS(abs(a.img()-b.img())<TOL,1);
    }

    void testDefaultConstructor () { 
        Complex a;
        TS_ASSERT_EQUALS(a.real(), 0);
        TS_ASSERT_EQUALS(a.img(), 0);
    }

    void testOneParamConstructor () { 
        Complex a(1);
        TS_ASSERT_EQUALS(a.real(), 1);
        TS_ASSERT_EQUALS(a.img(), 0);
    }

    void testTwoParamConstructor(){
        Complex a(2,3);
        TS_ASSERT_EQUALS(a.real(), 2);
        TS_ASSERT_EQUALS(a.img(), 3);
    }

    void testCopyConstructor(){
        Complex a(2,3);
        Complex b(a);
        TS_ASSERT_EQUALS(b.real(), 2);
        TS_ASSERT_EQUALS(b.img(), 3);
    }

    void testassignmentEqual(){
        Complex a(2,3);
        Complex b = a;

        TS_ASSERT_EQUALS(b.real(), 2);
        TS_ASSERT_EQUALS(b.img(), 3);
    }

    void testplusEqual(){
        Complex a(2,2);
        Complex b(1,1);

        a+=b;

        TS_ASSERT_EQUALS(a.real(), 3);
        TS_ASSERT_EQUALS(a.img(), 3);
    }

    void testminusEqual(){
        Complex a(2,3);
        Complex b(1,1);

        a-=b;

        TS_ASSERT_EQUALS(a.real(), 1);
        TS_ASSERT_EQUALS(a.img(), 2);
    }

    void testtimesEqual(){
        Complex a(2,3);
        Complex b(1,1);

        a*=b;

        TS_ASSERT_EQUALS(a.real(),-1);
        TS_ASSERT_EQUALS(a.img(), 5);

        a*=0;
        TS_ASSERT_EQUALS(a.real(), 0);
        TS_ASSERT_EQUALS(a.img(), 0);
    }

    void testDivEqual(){
        Complex a(2,4);
        Complex b(1,1);
        Complex c(2,4);
        Complex d(1,1);

        a/=b;

        TS_ASSERT_EQUALS(a.real(), 3);
        TS_ASSERT_EQUALS(a.img(), 1);

        d/=c;
        TS_ASSERT_EQUALS(d.real(), 0.3);
        TS_ASSERT_EQUALS(d.img(), -0.1);
    }

    void testUnaryOperators(){ 
        Complex a(2,4);
        Complex b(1,1);

        a = +a;
        b = -b;

        TS_ASSERT_EQUALS(a.real(), 2);
        TS_ASSERT_EQUALS(a.img(), 4);

        TS_ASSERT_EQUALS(b.real(), -1);
        TS_ASSERT_EQUALS(b.img(), -1);
    }


    void testBinaryPlus (){
        Complex a(1,1);
        Complex b(2,2);
        Complex c(3,3);

        TS_ASSERT_EQUALS((a+b)==c, 1);
    }

    void testBinaryMinus (){
        Complex a(1,1);
        Complex b(2,2);
        Complex c(3,3);

        TS_ASSERT_EQUALS((c-a)==b, 1);
    }
    void testMult (){
        Complex a(1,1);
        Complex b(2,2);
        Complex c(3,3);

        TS_ASSERT_EQUALS((b*a) == Complex(0,4), 1);
        TS_ASSERT_EQUALS((b*b) == Complex(0,8), 1);
        TS_ASSERT_EQUALS((c*c) == Complex(0,18), 1);
    }
    void testDiv (){
        Complex a(1,1);
        Complex b(2,2);
        Complex c(3,3);

        TS_ASSERT_EQUALS((b/b==Complex(1,0)), 1);

    }

    void testAbs (){
        Complex a(1,1);
        Complex b(-2,2);
        Complex c(-3,-3);
        Complex d(0,0);

        TS_ASSERT_EQUALS(abs(a)==a, 1);
        TS_ASSERT_EQUALS(abs(b).real() == 2, 1);
        TS_ASSERT_EQUALS(abs(c) == Complex(3,3), 1);
        TS_ASSERT_EQUALS(abs(d)==d, 1);
    }    

    void testNotEqual (){
        Complex a(1,1);
        Complex b(-2,2);
        Complex c(-3,-3);

        TS_ASSERT_EQUALS(a!=a, 0);
        TS_ASSERT_EQUALS(a!=b, 1);
    }





    void testMathExpressions(){
        Complex a1 = 10*((Complex(1,0)/Complex(1,2))*(Complex(1,3)/Complex(2,-4)));
        ASSERT_COMPLEX_EQUALS(a1,Complex(1,3));


    }




};







