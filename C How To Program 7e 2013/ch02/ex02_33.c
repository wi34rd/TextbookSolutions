#include <stdio.h>

int main(void) {
    int totalMilesDrivenPerDay, costPerGallonOfGasoline, averageMilesPerGallon, parkingFeesPerDay, tollsPerDay;

    printf("Total miles per day: ");
    scanf("%d", &totalMilesDrivenPerDay);
    printf("Cost per gallon of gasoline: ");
    scanf("%d", &costPerGallonOfGasoline);
    printf("Average miles per gallon: ");
    scanf("%d", &averageMilesPerGallon);
    printf("Parking fees per day: ");
    scanf("%d", &parkingFeesPerDay);
    printf("Tolls per day: ");
    scanf("%d", &tollsPerDay);

    printf("\nYour daily driving cost is %d\n", totalMilesDrivenPerDay * averageMilesPerGallon * costPerGallonOfGasoline + parkingFeesPerDay + tollsPerDay);

    return 0;
}