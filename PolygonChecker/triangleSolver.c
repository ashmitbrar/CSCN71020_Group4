#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h"

char* analyzeTriangle(float side1, float side2, float side3) {
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
	}	
	float angleA, angleB, angleC, R, s, pi, area;
	pi = acos(-1);

	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

	R = (side1 * side2 * side3) / (4 * area);

	angleA = (180 / pi) * asin(side1 / 2 * R);
	angleB = (180 / pi) * asin(side2 / 2 * R);
	angleC = (180 / pi) * asin(side3 / 2 * R);

	printf("%.2f %.2f %.2f", angleA, angleB, angleC);
	return result;
}/*
void angle(float angleA, float angleB, float angleC, float pi, float R)
{

	angleA = (180 / pi) * asin(side1 / (2 * R));
	angleB = (180 / pi) * asin(side2 / (2 * R));
	angleC = (180 / pi) * asin(side3 / (2 * R));

	printf("The sides are: %.2f\t   %.2f\t     %.2f\t\n", side1, side2, side3);
	printf("The angles are: %.2f\t%.2f\t%.2f\n", angleA, angleB, angleC);

}*/

