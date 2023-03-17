#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "triangleSolver.h"
#include <math.h>
#include "getTrianglesSides.h"
#include "isValidTriangle.h"
#include "calculateTriangleAngles.h"
int side = 0;

int main() {
	bool continueProgram = true; 
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			getTrianglesSides(triangleSides);
			if (isValidTriangle(triangleSides[0], triangleSides[1], triangleSides[2]))
			{
				double angles[3] = { 0.0, 0.0, 0.0 };
				calculateTriangleAngles(triangleSides[0], triangleSides[1], triangleSides[2], angles);
				printf("The angles of the triangle are:%f,%f,%f\n", angles[0], angles[1], angles[2]);
			}
			else {
				printf("These do not form a triangle");
			}
			
			break;
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}