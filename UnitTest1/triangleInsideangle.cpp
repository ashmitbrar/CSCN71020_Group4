#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(triangleInsideAngle)
	{
	public:

		TEST_METHOD(UnitTest1)

		{
			int side1 = 23, side2 = 33, side3 = 23;
			float  angle1, angle2, angle3;
			float R, s, pi, area;
			pi = acos(-1);

			s = (side1 + side2 + side3) / 2;
			area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

			R = (side1 * side2 * side3) / (4 * area);

			angle1 = (180 / pi) * asin(side1 / (2 * R));
			angle2 = (180 / pi) * asin(side2 / (2 * R));
			angle3 = (180 / pi) * asin(side3 / (2 * R));
		}
		TEST_METHOD(UnitTest2)

		{
			int side1 = 3, side2 = 3, side3 = 9;
			float  angle1, angle2, angle3;
			float R, s, pi, area;
			pi = acos(-1);

			s = (side1 + side2 + side3) / 2;
			area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

			R = (side1 * side2 * side3) / (4 * area);

			angle1 = (180 / pi) * asin(side1 / (2 * R));
			angle2 = (180 / pi) * asin(side2 / (2 * R));
			angle3 = (180 / pi) * asin(side3 / (2 * R));
		}

		TEST_METHOD(UnitTest3)

		{
			int side1 = 22, side2 = 22, side3 = 22;
			float  angle1, angle2, angle3;
			float R, s, pi, area;
			pi = acos(-1);

			s = (side1 + side2 + side3) / 2;
			area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

			R = (side1 * side2 * side3) / (4 * area);

			angle1 = (180 / pi) * asin(side1 / (2 * R));
			angle2 = (180 / pi) * asin(side2 / (2 * R));
			angle3 = (180 / pi) * asin(side3 / (2 * R));
		}
		TEST_METHOD(UnitTest4)

		{
			int side1 = 20, side2 = 22, side3 = 30;
			float  angle1, angle2, angle3;
			float R, s, pi, area;
			pi = acos(-1);

			s = (side1 + side2 + side3) / 2;
			area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

			R = (side1 * side2 * side3) / (4 * area);

			angle1 = (180 / pi) * asin(side1 / (2 * R));
			angle2 = (180 / pi) * asin(side2 / (2 * R));
			angle3 = (180 / pi) * asin(side3 / (2 * R));
		}

	};
}