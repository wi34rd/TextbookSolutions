#include <stdio.h>

int main(void) {
    float radius;
    float pi = 3.14159;

    printf("Enter the radis of a circle: ");
    scanf("%f", &radius);

    printf("The diameter is %f\n", 2 * radius);
    printf("The circumference is %f\n", 2 * pi * radius);
    printf("The area is %f\n", pi * radius * radius);

    return 0;
}