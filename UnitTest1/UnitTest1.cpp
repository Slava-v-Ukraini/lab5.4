#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../PR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
    TEST_CLASS(UnitTestProject)
   {
    public:

        // Тест для S0 (ітеративна функція)
        TEST_METHOD(TestS0)
        {
            int K = 1, N = 5;
            double expected = S0(K, N);
            double actual = 0;
            for (int i = K; i <= N; i++) {
                actual += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
            }
            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест для S1 (рекурсія спадає)
        TEST_METHOD(TestS1)
        {
            int K = 1, N = 5;
            double expected = S1(K, N, K);
            double actual = 0;
            for (int i = K; i <= N; i++) {
                actual += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
            }
            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест для S2 (рекурсія зростає)
        TEST_METHOD(TestS2)
        {
            int K = 1, N = 5;
            double expected = S2(K, N, N);
            double actual = 0;
            for (int i = N; i >= K; i--) {
                actual += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
            }
            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест для S3 (рекурсія спадає)
        TEST_METHOD(TestS3)
        {
            int K = 1, N = 5;
            double expected = S3(K, N, K, 0);
            double actual = 0;
            for (int i = K; i <= N; i++) {
                actual += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
            }
            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест для S4 (рекурсія зростає)
        TEST_METHOD(TestS4)
        {
            int K = 1, N = 5;
            double expected = S4(K, N, N, 0);
            double actual = 0;
            for (int i = N; i >= K; i--) {
                actual += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
            }
            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}
