#include <stdio.h>

int main(void) {
    int counter = 0, number, largest1, largest2;

    printf("Enter a number: ");
    scanf("%d", &largest1);
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (counter < 8) {
        if (largest1 < number) {
            largest2 = largest1;
            largest1 = number;
        } else if (largest2 < number) {
            largest2 = number;
        }
        
        ++counter;

        printf("Enter a number: ");
        scanf("%d", &number);
    }

    printf("The largest numbers are: %d & %d\n", largest1, largest2);

    return 0;
}