#include <stdio.h>

int main(void) {
    int side, i, j;
    
    printf("The side of a square: ");
    scanf("%d", &side);
    i = 0;

    while (i < side) {
        j = 0;

        while(j < side) {
            if (i == 0) {
                printf("*");
            } else if (j == 0) {
                printf("*");
            } else if (i == side - 1) {
                printf("*");
            } else if (j == side - 1) {
                printf("*");
            } else {
                printf(" ");
            }

            ++j;
        }

        puts("");

        ++i;
    }

    return 0;
}