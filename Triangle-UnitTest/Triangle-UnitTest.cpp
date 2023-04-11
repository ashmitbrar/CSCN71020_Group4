#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleUnitTest
{
	TEST_CLASS(TriangleUnitTest)
	{
	public:
		
		TEST_METHOD(UnitTest1)
		{
			int side1 = 6, side2 = 8, side3 = 10;
			float angle1, angle2, angle3, R, s, pi, area;
			pi = acos(-1);

			s = (side1 + side2 + side3) / 2;
			area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

			R = (side1 * side2 * side3) / (4 * area);

			angle1 = (180 / pi) * asin(side1 / (2 * R));
			angle2 = (180 / pi) * asin(side2 / (2 * R));
			angle3 = (180 / pi) * asin(side3 / (2 * R));

			float expectedAngle1 = 36.87f;
			float expectedAngle2 = 53.13f;
			float expectedAngle3 = 90.00f;

			Assert::AreEqual(expectedAngle1, angle1, 0.01f);
			Assert::AreEqual(expectedAngle2, angle2, 0.01f);
			Assert::AreEqual(expectedAngle3, angle3, 0.01f);
		}
		TEST_METHOD(UnitTest2)
		{
			int side1 = 3, side2 = 3, side3 = 9;
			char* result2 = "";

			if (side1 <= 0 || side2 <= 0 || side3 <= 0)
			{
				result2 = "Not a triangle";

				Assert::AreEqual(result2, result2);
			}
		}

		TEST_METHOD(UnitTest3)
		{
			int side1 = 22, side2 = 22, side3 = 22;
			char* result3 = "";
			if (side1 == side2 && side1 == side3)
			{
				result3 = "Equilateral triangle";

				Assert::AreEqual(result3, result3);
			}

		}

		TEST_METHOD(UnitTest4)
		{
			int side1 = 20, side2 = 22, side3 = 30;
			char* result4 = "";
			if (side1 != side2 != side3)
			{
				result4 = "Scalene triangle";

				Assert::AreEqual(result4, result4);
			};
		};

	};
}
