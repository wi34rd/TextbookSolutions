#include <stdio.h>

int main(void) {
    int a;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &a);
    
    printf("%d   %d   %d   %d   %d\n", a / 10000, a / 1000 % 10, a / 100 % 10, a / 10 % 10, a % 10);

    return 0;
}