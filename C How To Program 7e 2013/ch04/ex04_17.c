#include <stdio.h>

int main(void) {
    int accountNumber1 = 15897;
    int creditLimit1 = 2000;
    int carrentBalance1 = 980;

    int accountNumber2 = 48542;
    int creditLimit2 = 5000;
    int carrentBalance2 = 3200;

    int accountNumber3 = 22483;
    int creditLimit3 = 3000;
    int carrentBalance3 = 1750;

    int newCreditLimit1 = creditLimit1 / 2;
    printf("The new credit limit for customer with account number %d is %d\n", accountNumber1, newCreditLimit1);
    
    int newCreditLimit2 = creditLimit2 / 2;
    printf("The new credit limit for customer with account number %d is %d\n", accountNumber2, newCreditLimit2);
    
    int newCreditLimit3 = creditLimit3 / 2;
    printf("The new credit limit for customer with account number %d is %d\n", accountNumber3, newCreditLimit3);

    puts("\nCustomers account numbers which have current balances that exceed their new\ncredit limits:");

    if (carrentBalance1 > newCreditLimit1) {
        printf("%d\n", accountNumber1);
    }

    if (carrentBalance2 > newCreditLimit2) {
        printf("%d\n", accountNumber2);
    }

    if (carrentBalance3 > newCreditLimit3) {
        printf("%d\n", accountNumber3);
    }

    return 0;
}