#include <stdio.h>

int main(void) {
    float principal, rate;
    int days;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);
    
    while (principal != -1) {
        printf("Enter interest rate: ");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        printf("The interest charge is $%.2f\n\n", principal * rate * days / 365);

        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
    }
    
    return 0;
}