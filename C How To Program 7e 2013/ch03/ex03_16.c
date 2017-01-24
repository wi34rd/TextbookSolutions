#include <stdio.h>

int main(void) {
    float gallons, miles, overallGallons, overallMiles;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);
    
    while (gallons != -1) {
        overallGallons += gallons;
        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        overallMiles += miles;
        printf("The miles/gallon for this tank was %f\n\n", miles / gallons);
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
    }

    printf("The overall average miles/gallon was %f\n", overallMiles / overallGallons);
    
    return 0;
}