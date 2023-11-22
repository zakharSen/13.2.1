#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:
        double dod(double a, double n, double x) {
            return a *= -((n * x) / (n + 1));
        }

        TEST_METHOD(TestMethod1)
        {
            // Початкові значення
            double a = 1.0;
            double n = 2.0;
            double x = 3.0;

            // Виклик функції
            double result = dod(a, n, x);

            // Перевірка результату
            Assert::AreEqual(-2.0, result);
        }

    };
}