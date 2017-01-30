#include <stdio.h>
#include <math.h>

double hypotenuse(double, double);

int main(void) {
    double side1, side2;

    printf("Enter legs of a right triangle: ");
    scanf("%lf%lf", &side1, &side2);

    printf("%.3f\n", hypotenuse(side1, side2));

    return 0;
}

double hypotenuse(double side1, double side2) {
    return sqrt(side1 * side1 + side2 * side2);
}