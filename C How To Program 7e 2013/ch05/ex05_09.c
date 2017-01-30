#include <stdio.h>

double calculateCharges(double);

int main(void) {
    double hours1, hours2, hours3, totalCharge = .0, charge;

    printf("Enter the hours parked for customer 1: ");
    scanf("%lf", &hours1);

    printf("Enter the hours parked for customer 2: ");
    scanf("%lf", &hours2);

    printf("Enter the hours parked for customer 3: ");
    scanf("%lf", &hours3);

    printf("\n%-5s%11s%13s\n", "Car", "Hours", "Charge");
    
    charge = calculateCharges(hours1);
    totalCharge += charge;
    printf("%-5d%11.1f%13.2f\n", 1, hours1, charge);
    
    charge = calculateCharges(hours2);
    totalCharge += charge;
    printf("%-5d%11.1f%13.2f\n", 2, hours2, charge);
    
    charge = calculateCharges(hours3);
    totalCharge += charge;
    printf("%-5d%11.1f%13.2f\n", 3, hours3, charge);
    
    printf("%-5s%11.2f%13.2f\n", "TOTAL", hours1 + hours2 + hours3, totalCharge);

    return 0;
}

double calculateCharges(double hours) {
    return hours <= 3.0 ? 2.00 : hours == 24.0 ? 10.00 : 2.00 + .50 * (hours - 3.0);
}