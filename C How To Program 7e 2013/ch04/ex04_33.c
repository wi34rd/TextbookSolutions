#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 100; ++i) {
        int j = i;

        printf("%3d\t", i);

        while (j > 0) {
            if (j == 100) {
                printf("C");
                break;
            }

            if (j >= 90) {
                j -= 90;
                printf("XC");
                continue;
            }

            if (j >= 50) {
                j -= 50;
                printf("L");
                continue;
            }

            if (j >= 40) {
                j -= 40;
                printf("XL");
                continue;
            }

            if (j >= 10) {
                j -= 10;
                printf("X");
                continue;
            }

            if (j == 9) {
                j -= 9;
                printf("IX");
                continue;
            }

            if (j >= 5) {
                j -= 5;
                printf("V");
                continue;
            }

            if (j == 4) {
                j -= 4;
                printf("IV");
                continue;
            }

            if (j > 0) {
                j -= 1;
                printf("I");
            }
        }

        puts("");
    }

    return 0;
}
