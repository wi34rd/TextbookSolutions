#include <stdio.h>

int main(void) {
    int number, d1, d2, d3, d4;

    printf("Enter a four-digit encrypted integer: ");
    scanf("%d", &number);

    d1 = (number / 1000 + 3) % 10;
    d2 = (number / 100 % 10 + 3) % 10;
    d3 = (number / 10 % 10 + 3) % 10;
    d4 = (number % 10 + 3) % 10;

    printf("The original integer is %d\n", d3 * 1000 + d4 * 100 + d1 * 10 + d2);

    return 0;
}