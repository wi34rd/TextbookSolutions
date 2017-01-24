#include <stdio.h>

int main(void) {
    int counter = 1;

    while (counter <= 100) {
        printf("*");

        if (counter % 10 == 0) {
            puts("");
        }

        ++counter;
    }
    
    return 0;
}