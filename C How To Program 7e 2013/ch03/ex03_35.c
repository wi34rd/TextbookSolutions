#include <stdio.h>

int main(void) {
    int bin, dec = 0, positionalValue = 1;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    while (bin > 0) {
        dec += bin % 10 * positionalValue;
        bin /= 10;

        positionalValue *= 2;
    }

    printf("%d\n", dec);

    return 0;
}