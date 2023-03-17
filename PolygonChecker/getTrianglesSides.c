#include <stdio.h>
#include "getTrianglesSides.h"

int* getTrianglesSides(int* triangleSides) {
    printf_s("Enter the three sides of the triangle: ");
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &triangleSides[i]);
    }
    return triangleSides;
}

