#include <stdio.h>

int main(void) {
    int integer, counter = 0, sum = 0;

    scanf("%d", &integer);
    
    while (integer != 9999) {
        ++counter;
        sum += integer;
        scanf("%d", &integer);
    }

    printf("\nThe average of the integers is %.2f\n", (float)sum / counter);

    return 0;
}