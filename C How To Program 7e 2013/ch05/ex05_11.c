#include <stdio.h>
#include <math.h>

double roundToInteger(double);
double roundToTenths(double);
double roundToHundreths(double);
double roundToThousandths(double);

int main(void) {
    double number;
    
    printf("Enter a number: ");
    scanf("%lf", &number);

    printf("%f\n", roundToInteger(number));
    printf("%f\n", roundToTenths(number));
    printf("%f\n", roundToHundreths(number));
    printf("%f\n", roundToThousandths(number));

    return 0;
}

double roundToInteger(double number) {
    return floor(number + .5);
}

double roundToTenths(double number) {
    return floor(number * 10 + .5) / 10;
}

double roundToHundreths(double number) {
    return floor(number * 100 + .5) / 100;
}

double roundToThousandths(double number) {
    return floor(number * 1000 + .5) / 1000;
}
