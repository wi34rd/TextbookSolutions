#include <stdio.h>

int main(void) {
    int counter = 1;

    while (counter < 10) {
        printf("%d   ", counter++);
    }

    printf("%d\n", counter);
    
    return 0;
}