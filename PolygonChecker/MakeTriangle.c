#include <stdio.h>
#include <stdbool.h>

#include "MakeTriangle.h"

char* MakeTriangle(int X, int Y, int Z)
{
	char* outcome = "";

	printf("Form A Triangle Selected:\n");
	printf("Input Three sides for X,Y,Z: ");
	printf("X: ");
	scanf_s("%d", &X);
	printf("Y: ");
	scanf_s("%d", &Y);
	printf("Z: ");
	scanf_s("%d", &Z);

	if ((X + Y) > Z)
	{
		outcome = "The given sides forms a triangle";
	}
	else
	{
		outcome = "The given sides: X= %d, Y= %d, Z=%d do NOT forms a triangle";
	}

	return outcome;
}