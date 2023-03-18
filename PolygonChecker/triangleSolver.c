#include <stdio.h>
#include <stdbool.h>


char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0  || side3 <= 0) {
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


#include <stdio.h>
#include <math.h>


void calculateTriangleAngles(int side1, int side2, int side3, double* angles) {
	angles[0] = acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
	angles[1] = acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3));
	angles[2] = acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
}
#include <stdio.h>

int* getTrianglesSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool isValidTriangle(int side1, int side2, int side3) {
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		return false;
	}
	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
		return false;
	}
	return true;
}