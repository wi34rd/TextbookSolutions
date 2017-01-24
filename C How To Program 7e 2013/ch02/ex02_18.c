#include <stdio.h>

int main(void) {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    if (a > b) {
        printf("%d is larger.", a);
    }

    if (a < b) {
        printf("%d is larger.", b);
    }

    if (a == b) {
        printf("These numbers are equal.\n");
    }

    return 0;
}