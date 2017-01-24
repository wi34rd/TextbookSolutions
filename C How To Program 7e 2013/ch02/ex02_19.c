#include <stdio.h>

int main(void) {
    int a, b, c;
    
    printf("Enter three different integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Sum is %d\n", a + b + c);
    printf("Average is %d\n", (a + b + c) / 3);
    printf("Product is %d\n", a * b * c);
    
    int temp = a;

    if (b < temp) {
        temp = b;
    }

    if (c < temp) {
        temp = c;
    }

    printf("Smallest is %d\n", temp);

    temp = a;
    
    if (b > temp) {
        temp = b;
    }

    if (c > temp) {
        temp = c;
    }

    printf("Largest is %d\n", temp);

    return 0;
}