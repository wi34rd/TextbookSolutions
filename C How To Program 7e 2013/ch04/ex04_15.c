#include <stdio.h>
#include <math.h>

int main(void) {
    double amount;
    double principal = 1000.0;
    
    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (int rate = 5; rate <= 10; ++rate) {
        printf("\nThe interest rate is %d%%\n", rate);
        for (int year = 1; year <= 10; ++year) {
            amount = principal * pow(1.0 + rate / 100.0, year);
            printf("%4u%21.2f\n", year, amount);
        }
    }

    return 0;
}