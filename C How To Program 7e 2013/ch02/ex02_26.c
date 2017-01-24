#include <stdio.h>

int main(void) {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    if (a % b == 0) {
        printf("The first is a multiple of the second.\n", a);
    }

    if (a % b != 0) {
        printf("The first is not a multiple of the second.\n", a);
    }

    return 0;
}