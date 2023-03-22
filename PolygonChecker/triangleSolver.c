#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h" 

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
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
	};

	float A, B, C, R, s, pi, area;
	pi = acos(-1);

	s = (side1 + side2 + side3) / 2;

	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

	R = (side1 * side2 * side3) / (4 * area);

	A = (180 / pi) * asin(side1 / (2 * R));
	B = (180 / pi) * asin(side2 / (2 * R));
	C = (180 / pi) * asin(side3 / (2 * R));

	//printf("Sides:  %d %d %d\n", side1, side2, side3);
	//printf("Angles: %6.2f %6.2f %6.2f\n", A, B, C);


	if (side2 + side3 > side1)
	{
		printf("Triangle\n");
		printf("Sides:  %d %d %d\n", side1, side2, side3);
		printf("Angles: %6.2f %6.2f %6.2f\n", A, B, C);
	}
	else (side2 + side3 <= side1);
	{
		printf("not triangle\n");
	}

	return result;
};