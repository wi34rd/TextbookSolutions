#include <stdio.h>

int main(void) {
    int integer, counter = 0;

    printf("Enter an integer (5 digits or fewer): ");
    scanf("%d", &integer);

    while (integer > 0) {
        if (integer % 10 == 7) {
            ++counter;
        }

        integer /= 10;
    }

    printf("In the integer %d digits are 7s.\n", counter);

    return 0;
}