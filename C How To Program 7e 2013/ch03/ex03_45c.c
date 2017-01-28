#include <stdio.h>

int main(void) {
    unsigned n = 1, factorial = 1, x, xPow = 1;
    float e = 1.0;

    printf("Enter x: ");
    scanf("%u", &x);

    while (n < 13) {
        xPow *= x;
        factorial *= n++;
        e += (float)xPow / factorial;
    }

    printf("%f\n", e);

    return 0;
}