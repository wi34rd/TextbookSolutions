#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three nonzero integer values: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        printf("The integers could represent the sides of a right triangle.\n");
    }

    return 0;
}