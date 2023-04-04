#include <stdio.h>
#include <stdbool.h>
#include "MakeRectangle.h"

int* MakeRectangle(int x1, int y1, int x2, int y2, int x3, int y3,int x4, int y4)
{
	int parameter, area;

	int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
	int c = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3);
	int d = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4);

	if (a == c && b == d)
	{
		printf("The given numbers create a rectangle\n");
		parameter = a + c + b + d;
		area = a * b;
		printf("parameter: %i\n area: %i\n", parameter, area);
		
	}
	else 
	{
		printf("The given numbers do NOT create a rectangle");
		parameter = a + c + b + d;
		printf("parameter: %i", parameter);
	}

	return 0;
}