#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h" 

#define M_PI 3.14159265358979323846

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2) ||
		(side2 == side3 && side2 != side1))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	};


	// to calculate the internal angles of a triangle
	float angle1, angle2, angle3;
	getTriangleAngles(side1, side2, side3, &angle1, &angle2, &angle3);
	if (side1 <= 0 && side2 <= 0 && side3 <= 0)
	{
		printf("The given sides does not create a triangle\n");


	}
	else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
	{
		printf("The given sides does not create a triangle\n");

	}
	else if (side1 + side2 > side3 || side2 + side3 > side1 || side1 + side3 > side2)
	{

		printf("Sides:  %d %d %d\n", side1, side2, side3);
		printf("Angles: %6.2f %6.2f %6.2f\n", angle1, angle2, angle3);
	}

	return result;
}
void getTriangleAngles(int side1, int side2, int side3, float* angle1, float* angle2, float* angle3) {
	float cosA, cosB, cosC;
	cosA = (side2 * side2 + side3 * side3 - side1 * side1) / (2.0f * side2 * side3);
	cosB = (side1 * side1 + side3 * side3 - side2 * side2) / (2.0f * side1 * side3);
	cosC = (side1 * side1 + side2 * side2 - side3 * side3) / (2.0f * side1 * side2);
	// Calculate the angles using the arccosine function
	*angle1 = acos(cosA) * 180.0 / M_PI;
	*angle2 = acos(cosB) * 180.0 / M_PI;
	*angle3 = acos(cosC) * 180.0 / M_PI;
}