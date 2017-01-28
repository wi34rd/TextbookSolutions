#include <stdio.h>

int main(void) {
    int rows;

    printf("Enter an odd number in the range 1 to 19: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; ++i) {
        int j;

        for (j = 0; j < (i > rows / 2 ? i - rows / 2 : rows / 2 - i); ++j) {
            printf(" ");
        }

        for(j = 0; j < (i > rows / 2 ? 2 * (rows - i - 1) + 1 : 2 * i + 1); ++j) {
            printf("*");
        }

        puts("");
    }

    return 0;
}
