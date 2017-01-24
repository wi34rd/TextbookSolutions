#include <stdio.h>

int main(void) {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    printf("The integers' sum is %d\n", a);
    printf("The integers' product is %d\n", a * b);
    printf("The integers' difference is %d\n", a - b);
    printf("The integers' quotient is %d\n", a / b);
    printf("The integers' remainder is %d\n", a % b);

    return 0;
}