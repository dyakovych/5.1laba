#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1a/5.1a.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51a
{
    TEST_CLASS(UnitTest51a)
    {
    public:

        TEST_METHOD(TestH_Zero)
        {
            // h(0, 0) = 0 / 1 = 0
            double t = h(0, 0);
            Assert::AreEqual(0.0, t, 1e-9);
        }

        TEST_METHOD(TestH_OneOne)
        {
            // h(1, 1) = 2 / 3
            double t = h(1, 1);
            Assert::AreEqual(2.0 / 3.0, t, 1e-9);
        }

        TEST_METHOD(TestH_OneThree)
        {
            // h(1, 3) = 10 / 11
            double t = h(1, 3);
            Assert::AreEqual(10.0 / 11.0, t, 1e-9);
        }

        TEST_METHOD(TestH_TwoSqrt5)
        {
            // h(2, sqrt(5)) = 9 / 25 = 0.36
            double t = h(2, sqrt(5.0));
            Assert::AreEqual(0.36, t, 1e-9);
        }

        TEST_METHOD(TestH_ZeroThree)
        {
            // h(0, 3) = 9 / 1 = 9
            double t = h(0, 3);
            Assert::AreEqual(9.0, t, 1e-9);
        }
    };
}