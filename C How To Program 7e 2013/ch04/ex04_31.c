#include <stdio.h>

int main(void) {
    for (int i = 0; i < 9; ++i) {
        int j;

        for (j = 0; j < (i > 4 ? i - 4 : 4 - i); ++j) {
            printf(" ");
        }

        for(j = 0; j < (i > 4 ? 2 * (8 - i) + 1 : 2 * i + 1); ++j) {
            printf("*");
        }

        puts("");
    }

    return 0;
}
