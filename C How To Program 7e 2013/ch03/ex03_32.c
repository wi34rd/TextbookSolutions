#include <stdio.h>

int main(void) {
    int side, i, j;
    
    printf("The side of a square: ");
    scanf("%d", &side);
    i = 0;

    while (i < side) {
        j = 0;

        while(j < side) {
            printf("*");
            ++j;
        }

        puts("");

        ++i;
    }

    return 0;
}