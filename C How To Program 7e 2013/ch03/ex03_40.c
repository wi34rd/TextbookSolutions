#include <stdio.h>

int main(void) {
    int powOf2 = 2;
    
    while (1) {
        printf("%d\n", powOf2);

        powOf2 *= 2;
    }

    return 0;
}