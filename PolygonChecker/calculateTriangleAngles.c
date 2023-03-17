#include <stdio.h>
#include <math.h>
#include "calculateTriangleAngles.h"

void calculateTriangleAngles(int side1, int side2, int side3, double* angles) {
    double a2 = side1 * side1;
    double b2 = side2 * side2;
    double c2 = side3 * side3;
    double cosA = (b2 + c2 - a2) / (2 * side2 * side3);
    double cosB = (a2 + c2 - b2) / (2 * side1 * side3);
    double cosC = (a2 + b2 - c2) / (2 * side1 * side2);
    angles[0] = acos(cosA);
    angles[1] = acos(cosB);
    angles[2] = acos(cosC);
}
