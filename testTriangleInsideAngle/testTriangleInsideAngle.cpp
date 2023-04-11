#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(triangleInsideAngle)
    {
    public:

        //TEST_METHOD(UnitTest1)

        TEST_METHOD(UnitTest1)
        {
            // Isosceles triangle

            float angle1 = 30.0f; 
            float angle2 = 30.0f; 
            float angle3 = 45;
            float R = 1.0;
            float pi = acos(-1);

            float angleThree = (180 / pi) * asin(sqrt(2) / (2 * R));
            
                Assert::AreEqual(angle1, (180 / pi) * asin(1.0f / (2 * R)), 0.001f);
        }
       
        TEST_METHOD(UnitTest3)
        {
            // Scalene triangle
            float angle1 = 36.87f;
            float angle2 = 36.87f;
            float angle3 = 51.87f;
            float R = 2.0f;
            float pi = acos(-1);
            float angleThree = (180 / pi) * asin(sqrt(2) / (2 * R));
            //float s = 6.0f;
            //float area = sqrt(s * (s - 3.0f) * (s - 4.0f) * (s - 5.0f));

                Assert::AreEqual(angle1, (180 / pi) * asin(3.0f / (2 * R)), 0.001f);
            //Assert::AreEqual(angle2, (180 / pi) * asin(4.0f / (2 * R)), 0.001f);
            //Assert::AreEqual(angle3, (180 / pi) * asin(5.0f / (2 * R)), 0.001f);
        }
        //TEST_METHOD(UnitTest4)
        //{
        //    // Scalene triangle
        //    float angle1 = 36.87f;
        //    float angle2 = 53.13f;
        //    float angle3 = 90.0f;
        //    float R = 2.0f;
        //    float pi = acos(-1);
        //    float s = 6.0f;
        //    float area = sqrt(s * (s - 3.0f) * (s - 4.0f) * (s - 5.0f));

        //    Assert::AreEqual(angle1, (180 / pi) * asin(3.0f / (2 * R)), 0.001f);
        //    //Assert::AreEqual(angle2, (180 / pi) * asin(4.0f / (2 * R)), 0.001f);
        //    //Assert::AreEqual(angle3, (180 / pi) * asin(5.0f / (2 * R)), 0.001f);
        //}
    };


}