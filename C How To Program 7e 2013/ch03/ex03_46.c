#include <stdio.h>

int main(void) {
    int counter = 0;
    float population, rate;
    
    printf("Enter the current world population and the annual world population growth rate: ");
    scanf("%f%f", &population, &rate);
    printf("After, years\tPopulation\n");

    while (counter < 5) {
        ++counter;
        population += population / 100 * rate;
        printf("%d\t\t%.3f\n", counter, population);
    }

    return 0;
}