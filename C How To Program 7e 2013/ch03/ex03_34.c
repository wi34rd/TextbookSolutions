#include <stdio.h>

int main(void) {
    int number, d1, d2, d3, d4, d5;

    printf("Enter five-digit number: ");
    scanf("%d", &number);

    if (number / 10000 == number % 10) {
        if(number / 1000 % 10 == number / 10 % 10) {
            puts("The number is palindrome.");
        } else {
            puts("The number is not palindrome.");
        }
    } else {
        puts("The number is not palindrome.");
    }

    return 0;
}