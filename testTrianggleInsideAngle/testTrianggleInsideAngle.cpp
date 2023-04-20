#include "pch.h"
#include "CppUnitTest.h"
#include "triangleSolver.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(triangleInsideAngle)
    {
    public:

    

        TEST_METHOD(EquilateralTriangle)
        {
            float angle1, angle2, angle3;
            bool result = (30, 30, 30, &angle1, &angle2, &angle3);
            Assert::IsTrue(result);
            Assert::AreEqual(60.0f, angle1, 0.01f);
            Assert::AreEqual(60.0f, angle2, 0.01f);
            Assert::AreEqual(60.0f, angle3, 0.01f);
        }

        TEST_METHOD(IsoscelesTriangle)
        {
            float angle1, angle2, angle3;
            bool result = (30, 30, 40, &angle1, &angle2, &angle3);
            Assert::IsTrue(result);
            Assert::AreEqual(50.0f, angle1, 0.01f);
            Assert::AreEqual(50.0f, angle2, 0.01f);
            Assert::AreEqual(80.0f, angle3, 0.01f);
        }

        TEST_METHOD(ScaleneTriangle)
        {
            float angle1, angle2, angle3;
            bool result =(30, 40, 50, &angle1, &angle2, &angle3);
            Assert::IsTrue(result);
            Assert::AreEqual(36.87f, angle1, 0.01f);
            Assert::AreEqual(53.13f, angle2, 0.01f);
            Assert::AreEqual(90.00f, angle3, 0.01f);
        }

    };

}