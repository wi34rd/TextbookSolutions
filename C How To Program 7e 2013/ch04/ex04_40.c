#include <stdio.h>

int main(void) {
    float housing, food, clothing, transportation, education, healthcare, vacations;

    printf("Enter the expenses for housing: ");
    scanf("%f", &housing);

    printf("Enter the expenses for food: ");
    scanf("%f", &food);
    
    printf("Enter the expenses for clothing: ");
    scanf("%f", &clothing);

    printf("Enter the expenses for transportation: ");
    scanf("%f", &transportation);

    printf("Enter the expenses for education: ");
    scanf("%f", &education);

    printf("Enter the expenses for healthcare: ");
    scanf("%f", &healthcare);

    printf("Enter the expenses for vacations: ");
    scanf("%f", &vacations);

    printf("FairTax is $%.2f\n", (housing + food + clothing + transportation + education + healthcare + vacations) * 0.23);

    return 0;
}
