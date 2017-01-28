#include <stdio.h>

int main(void) {
    puts("(A)");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%s", "*");
        }

        puts("");
    }

    puts("\n(B)");
    for (int i = 10; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            printf("%s", "*");
        }

        puts("");
    }

    puts("\n(C)");
    for (int i = 10; i > 0; --i) {
        for (int j = 0; j < 10 - i; ++j) {
            printf(" ");
        }

        for (int j = 0; j < i; ++j) {
            printf("%s", "*");
        }

        puts("");
    }

    puts("\n(D)");
    for (int i = 0; i < 10; ++i) {
         for (int j = 0; j < 9 - i; ++j) {
            printf(" ");
        }

        for (int j = 0; j <= i; ++j) {
            printf("%s", "*");
        }

        puts("");
    }

    puts("");

    return 0;
}