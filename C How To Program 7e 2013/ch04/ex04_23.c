#include <stdio.h>
#include <math.h>

int main(void) {
    int amount;
    int principal = 100000;
    
    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (int rate = 5; rate <= 10; ++rate) {
        printf("\nThe interest rate is %d%%\n", rate);
        for (int year = 1; year <= 10; ++year) {
            amount = (int)(principal * pow(1.0 + rate / 100.0, year));
            printf("%4u%18d.%02d\n", year, amount / 100, amount % 100);
        }
    }

    return 0;
}