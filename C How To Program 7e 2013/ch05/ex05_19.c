#include <stdio.h>

void printSquare(int);

int main(void) {
    int side;

    printf("Enter a side of the square: ");
    scanf("%d", &side);

    printSquare(side);

    return 0;
}

void printSquare(int side) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            printf("*");
        }

        puts("");
    }
}