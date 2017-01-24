#include <stdio.h>

int main(void) {
    int account;
    float beginningBalance, newBalance, charges, credits, creditLimit;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);
    
    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);
        printf("Enter total charges: ");
        scanf("%f", &charges);
        printf("Enter total credits: ");
        scanf("%f", &credits);
        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        newBalance = beginningBalance + charges - credits;

        if (newBalance > creditLimit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance:      %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }
    
    return 0;
}