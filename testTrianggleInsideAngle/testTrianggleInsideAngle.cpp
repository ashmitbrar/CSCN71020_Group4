#include "pch.h"
#include "CppUnitTest.h"
#include "triangleSolver.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(triangleInsideAngle)
    {
    public:

     
        TEST_METHOD(UnitTest1)
        {
            // equilateral triangle
            
            float side1 = 30;
            float side2 = 30;
            float side3 = 30;
           /* getTriangleAngles(side1, side2, side3, &angle1, &angle2, &angle3);*/
            float angle1, angle2, angle3;
            getTriangleAngles(side1, side2, side3, &angle1, &angle2, &angle3);
            Assert::AreEqual(60.00f, angle1, 0.01f);
            Assert::AreEqual(60.00f, angle2, 0.01f);
            Assert::AreEqual(60.00f, angle3, 0.01f);
        }
        TEST_METHOD(UnitTest2)
        {
            // equilateral triangle

            float angle1 = 60.0f;
            float angle2 = 60.0f;
            float angle3 = 60.0;
            float R = 1.0;
            float pi = acos(-1);

            //float angle3 = (180 / pi) * asin(sqrt(2) / (2 * R));

            Assert::AreEqual(angle1, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle2, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle3, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
        }
        TEST_METHOD(UnitTest3)
        {
            // scalence triangle

            float angle1 = 30.0f;
            float angle2 = 40.0f;
            float angle3 = 45;
            float R = 1.0;
            float pi = acos(-1);

            //float angle3 = (180 / pi) * asin(sqrt(2) / (2 * R));

            Assert::AreEqual(angle1, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle2, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle3, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
        }

    };


}