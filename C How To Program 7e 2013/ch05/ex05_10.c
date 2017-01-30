#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    double x, y;
 
    for (int i = 0; i < rand() % 10; ++i) {
        printf("Enter a number: ");
        scanf("%lf", &x);

        y = (x + .5);
        
        printf("%f -> %.0f\n\n", x, y);
    }

    return 0;
}
