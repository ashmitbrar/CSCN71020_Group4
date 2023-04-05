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
			int x1=2,y1=5,x2=8,y2=5, x3=8, y3=3,x4=2,y4=3;
			int parameter;

			int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
			int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
			int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3);
			int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4);
			
				parameter = a + c + b + d;
				Assert::AreEqual(36,parameter);
			
		}
	};
}
