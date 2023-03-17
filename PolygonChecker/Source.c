#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS
#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";

	printf("Enter the side of triangles:\n");
	printf("side 1:");
	scanf_s("%d", &side1);
	printf("Side 2");
	scanf_s("%d", &side2);
	printf("enter third side:");
	scanf_s("%d", &side3);

	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}