#include <stdio.h>

int main(void) {
    unsigned n = 1, factorial = 1;
    float e = 1.0;

    while (n < 13) {
        factorial *= n++;
        e += 1.0 / factorial;
    }

    printf("%f\n", e);

    return 0;
}