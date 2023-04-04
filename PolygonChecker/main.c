#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "triangleSolver.h"
#include "MakeRectangle.h"

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
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;
		case 2:
			printf_s("Rectangle selected.\n");
			int x1, y1, x2, y2, x3, y3, x4, y4;
			printf_s("Enter the first point:\n ");
			printf_s("x1,y1 :");
			scanf_s("%d %d", &x1,&y1);
			printf_s("Enter the second point:\n");
			printf_s("x2,y2 :");
			scanf_s("%d %d", &x2,&y2);
			printf_s("Enter the third point:\n");
			printf_s("x3,y3 :\n");
			scanf_s("%d %d", &x3,&y3);
			printf_s("Enter the fourth point:\n");
			printf_s("x4,y4 :\n");
			scanf_s("%d %d", &x4,&y4);
			MakeRectangle(x1, y1, x2, y2, x3, y3, x4, y4);			break;

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
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* TriangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &TriangleSides[i]);
	}
	return TriangleSides;
}

int* getRectangleSides(int* RectangleSides) {
	

	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &RectangleSides[i]);
	}
	return RectangleSides;
}