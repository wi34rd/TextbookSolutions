#include <stdio.h>

int main(void) {
    int counter = 0, number, largest;

    printf("Enter a number: ");
    scanf("%d", &largest);
    
    while (counter < 9) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (largest < number) {
            largest = number;
        }
        
        ++counter;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}