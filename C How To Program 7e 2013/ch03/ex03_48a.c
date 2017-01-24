#include <stdio.h>

int main(void) {
    int number, d1, d2, d3, d4;

    printf("Enter a four-digit integer: ");
    scanf("%d", &number);

    d1 = (number / 1000 + 7) % 10;
    d2 = (number / 100 % 10 + 7) % 10;
    d3 = (number / 10 % 10 + 7) % 10;
    d4 = (number % 10 + 7) % 10;

    printf("The encripted integer is %04d\n", d3 * 1000 + d4 * 100 + d1 * 10 + d2);

    return 0;
}