#include <stdio.h>

void printSquare(int, char);

int main(void) {
    int side;
    char fillCharacter;

    printf("Enter a side of the square and a fill character: ");
    scanf("%d %c", &side, &fillCharacter);

    printSquare(side, fillCharacter);

    return 0;
}

void printSquare(int side, char fillCharacter) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            printf("%c", fillCharacter);
        }

        puts("");
    }
}