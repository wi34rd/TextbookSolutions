#include <stdio.h>

void printDiamond(int, char);
void printSquare(int, char);
void printTriangle(int, char);

int main(void) {
    int shape, size;
    char fillCharacter;

    printf("Enter a side of the square and a fill character: ");
    scanf("%d%d %c", &shape, &size, &fillCharacter);

    switch (shape) {
        case 0:
            printDiamond(size, fillCharacter);
            break;

        case 1:
            printSquare(size, fillCharacter);
            break;

        case 2:
            printTriangle(size, fillCharacter);
            break;
    }

    return 0;
}

void printDiamond(int size, char fillCharacter) {
    for (int i = 0; i < size; ++i) {
        int j;

        for (j = 0; j < (i > size / 2 ? i - size / 2 : size / 2 - i); ++j) {
            printf(" ");
        }

        for(j = 0; j < (i > size / 2 ? 2 * (size - i - 1) + 1 : 2 * i + 1); ++j) {
            printf("%c", fillCharacter);
        }

        puts("");
    }
}

void printSquare(int size, char fillCharacter) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%c", fillCharacter);
        }

        puts("");
    }
}

void printTriangle(int size, char fillCharacter) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%c", fillCharacter);
        }

        puts("");
    }
}
