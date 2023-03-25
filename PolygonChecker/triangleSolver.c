##include <stdio.h>
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
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
	else if (side1 != side2 != side3)
	{
		result = "Scalene triangle";
	};


	float  angle1, angle2, angle3, R, s, pi, area;
		pi = acos(-1);

		s = (side1 + side2 + side3) / 2;
		area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

		R = (side1 * side2 * side3) / (4 * area);

		angle1 = (180 / pi) * asin(side1 / (2 * R));
		angle2 = (180 / pi) * asin(side2 / (2 * R));
		angle3 = (180 / pi) * asin(side3 / (2 * R));



		//printf("Sides:  %d %d %d\n", side1, side2, side3);
		//printf("Angles: %6.2f %6.2f %6.2f\n", angle1, angle2, angle3);


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
};
