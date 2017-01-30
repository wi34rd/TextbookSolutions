#include <stdio.h>

int integerPower(int, int);

int main(void) {
    int base, exponent;

    printf("Enter a base and his exponent: ");
    scanf("%d%d", &base, &exponent);

    printf("%d^%d = %d\n", base, exponent, integerPower(base, exponent));

    return 0;
}

int integerPower(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}
