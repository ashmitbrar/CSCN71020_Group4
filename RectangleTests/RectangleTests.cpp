#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
	TEST_CLASS(RectangleTests)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int x1 = 2, y1 = 5, x2 = 8, y2 = 5, x3 = 8, y3 = 3, x4 = 2, y4 = 3;
			int parameter;

			int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); //36
			int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); //4
			int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3); //36
			int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); //4

			parameter = a + c + b + d;
			Assert::AreEqual(80, parameter);

		}
		TEST_METHOD(TestMethod2)
		{
			int x1 = 2, y1 = 5, x2 = 8, y2 = 5, x3 = 8, y3 = 3, x4 = 2, y4 = 3;
			int area;

			int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); //36
			int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); //4
			int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3); //36
			int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); //4

			area = a * b;
			Assert::AreEqual(144, area);

		}
		TEST_METHOD(TestMethod3)
		{
			int x1 = -3, y1 = 5, x2 = 0, y2 = -4, x3 = 3, y3 = 7, x4 = 6, y4 = -2;
			int parameter;

			int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); //90
			int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); //130
			int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3); //66
			int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); //130

			parameter = a + c + b + d;
			Assert::AreEqual(440, parameter);

		}
		TEST_METHOD(TestMethod4)
		{
			int x1 = -3, y1 = 5, x2 = 0, y2 = -4, x3 = 3, y3 = 7, x4 = 6, y4 = -2;
			int area;

			int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); //90
			int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); //130
			int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3); //66
			int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); //130

			area = a * b;
			Assert::AreEqual(11700, area);

		}
		TEST_METHOD(TestMethod5)
		{
			int x1 = -2, y1 = -2, x2 = 0, y2 = 4, x3 = 3, y3 = -1, x4 = 1, y4 = -1;
			int parameter;

			int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); //40
			int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); //34
			int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3); //4
			int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); //10

			parameter = a + c + b + d;
			Assert::AreEqual(88, parameter);

		}
		TEST_METHOD(TestMethod6)
		{
			int x1 = -4, y1 = 8, x2 = -9, y2 = 3, x3 = 1, y3 = 3, x4 = -4, y4 = -2;
			int parameter;

			int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); //50
			int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); //100
			int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3); //50
			int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); //100

			parameter = a + c + b + d;
			Assert::AreEqual(300, parameter);

		}
	};
};