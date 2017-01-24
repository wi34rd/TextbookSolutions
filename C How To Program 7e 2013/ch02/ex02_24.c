#include <stdio.h>

int main(void) {
    int a, b, c;
    
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("The integer is even.\n");
    }

    if (a % 2 != 0) {
        printf("The integer is odd.\n");
    }

    return 0;
}