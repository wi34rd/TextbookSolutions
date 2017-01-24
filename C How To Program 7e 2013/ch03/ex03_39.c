#include <stdio.h>

int main(void) {
    int counter = 1;

    while (counter <= 64) {
        if (counter % 16 == 9) {
            printf("%s", " ");
        }

        printf("%s", "* ");

        if (counter % 8 == 0) {
            puts("");
        }

        ++counter;
    }

    return 0;
}