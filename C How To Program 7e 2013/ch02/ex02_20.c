#include <stdio.h>

int main(void) {
    int radius;

    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    printf("Diameter is %f\n", 2.0 * radius);
    printf("Circumference is %f\n", 2 * 3.14159 * radius);
    printf("Area is %f\n", 3.14159 * radius * radius);

    return 0;
}