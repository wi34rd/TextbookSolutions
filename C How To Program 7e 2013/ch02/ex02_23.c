#include <stdio.h>

int main(void) {
    int a, b, c;
    
    printf("Enter three different integers: ");
    scanf("%d%d%d", &a, &b, &c);

    int temp = a;
    
    if (b > temp) {
        temp = b;
    }

    if (c > temp) {
        temp = c;
    }

    printf("Largest is %d\n", temp);

    temp = a;

    if (b < temp) {
        temp = b;
    }

    if (c < temp) {
        temp = c;
    }

    printf("Smallest is %d\n", temp);

    return 0;
}