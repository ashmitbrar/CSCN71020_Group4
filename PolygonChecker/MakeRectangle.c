#include <stdio.h>
#include <stdbool.h>
#include "MakeRectangle.h"

char* MakeRectangle(int a, int a2, int b, int b2)
{
	int parameter, area;

	//printf("Enter four numbers to form a rectangle:\n");
	//scanf_s("%i %i %i %i", &a, &a2, &b,&b2);
	
	if (a == a2 && b == b2)
	{
		printf("The given numbers create a rectangle");
		parameter = a + a2 + b + b2;
		area = a * b;
		printf("parameter: %i\n area: %i\n", parameter, area);
	}
	else if (a != a2 || b != b2);
	{
		printf("The given numbers do NOT create a rectangle");
		parameter = a + a2 + b + b2;
		printf("parameter: %i", parameter);
	}

	return 0;
}