#include <stdio.h>

int main(void) {
    int valuesNumber, value, sum = 0;

    scanf("%d", &valuesNumber);

    for (int i = 0; i < valuesNumber; ++i) {
        scanf("%d", &value);
        sum += value;
    }

    printf("\nThe sequnce of integers sum is %d\n", sum);

    return 0;
}