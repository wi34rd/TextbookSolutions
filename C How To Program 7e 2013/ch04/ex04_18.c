#include <stdio.h>

int main(void) {
    int numbers, number;
    
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &number);

        numbers = numbers * 31 + number;
    }

    puts("")

    for (int i = 0, pow = 923521; i < 5; ++i, pow /= 31) {
        number = numbers / pow % 31;
        
        for (int j = 0; j < number; ++j) {
            printf("*");
        }

        printf(" (%d)\n", number);
    }

    return 0;
}