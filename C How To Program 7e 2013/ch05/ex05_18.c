#include <stdio.h>
#include <stdlib.h>

int isEven(int);

int main(void) {
    int integer;

    for (int i = 0; i < rand() % 10; ++i) {
        printf("Enter an integer: ");
        scanf("%d", &integer);

        printf("%s\n", isEven(integer) ? "even" : "odd");
    }

    return 0;
}

int isEven(int integer) {
    return integer % 2 == 0;
}
