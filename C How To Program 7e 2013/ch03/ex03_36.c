#include <stdio.h>

int main(void) {
    unsigned counter = 1;

    while (counter <= 1000000000) {
        if (counter % 100000000 == 0) {
            printf("%d\n", counter);
        }

        ++counter;
    }

    return 0;
}