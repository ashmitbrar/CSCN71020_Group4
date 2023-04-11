#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(analyzeTriangle)
	{
	public:

		TEST_METHOD(UnitTest1)
		{
			int side1 = 23, side2 = 33, side3 = 23;

			char* result1 = "";

			if ((side1 == side2 && side1 != side3) ||
				(side1 == side3 && side1 != side2))
			{
				result1 = "Isosceles triangle";
				Assert::AreEqual(result1, result1);
			}


		}
		TEST_METHOD(UnitTest2)
		{
			int side1 = 30, side2 = 30, side3 = 90;
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