#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(triangleInsideAngle)
    {
    public:

        TEST_METHOD(UnitTest1)

           /* float  angle1, angle2, angle3, R, s, pi, area;
        pi = acos(-1);

        s = (side1 + side2 + side3) / 2;
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

        R = (side1 * side2 * side3) / (4 * area);

        angle1 = (180 / pi) * asin(side1 / (2 * R));
        angle2 = (180 / pi) * asin(side2 / (2 * R));
        angle3 = (180 / pi) * asin(side3 / (2 * R));*/


        {
            // Equilateral triangle
            float side1 = 30.0;
            float side2 = 30.0;
            float side3 = 30.0;
            float R = 1.0;
            float s = 45;                //45
            float pi = acos(-1);
            float area = sqrt(151875);       //

            Assert::AreEqual(angle1, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle2, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle3, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);

        }
        TEST_METHOD(UnitTest2)
        {
            // Isosceles triangle
            float angle1 = 90.0f;
            float angle2 = 45.0f;
            float angle3 = 45.0f;
            float R = 1.0f;
            float pi = acos(-1);
            float s = 3.0f / 2.0f;
            float area = sqrt(s * (s - 1.0f) * (s - 1.0f) * (s - sqrt(2)));

            Assert::AreEqual(angle1, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle2, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
          /*  Assert::AreEqual(angle3, (180 / pi) * asin(sqrt(2) / (2 * R)), 0.001f);*/
        }
        TEST_METHOD(UnitTest3)
        {
            // Scalene triangle
            float angle1 = 36.87f;
            float angle2 = 53.13f;
            float angle3 = 90.0f;
            float R = 2.0f;
            float pi = acos(-1);
            float s = 6.0f;
            float area = sqrt(s * (s - 3.0f) * (s - 4.0f) * (s - 5.0f));

            Assert::AreEqual(angle1, (180 / pi) * asin(3.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle2, (180 / pi) * asin(4.0f / (2 * R)), 0.001f);
            Assert::AreEqual(angle3, (180 / pi) * asin(5.0f / (2 * R)), 0.001f);
        }
    };

	
}