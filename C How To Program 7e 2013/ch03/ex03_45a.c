#include <stdio.h>

int main(void) {
    unsigned integer, factorial = 1;

    printf("Enter a nonnegative integer: ");
    scanf("%u", &integer);

    while (integer > 1) {
        factorial *= integer--;
    }

    printf("%u\n", factorial);

    return 0;
}