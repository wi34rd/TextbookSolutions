#include <stdio.h>
#include <stdlib.h>

int multiple(int, int);

int main(void) {
    int integer1, integer2;

    for (int i = 0; i < rand() % 10; ++i) {
        printf("Enter a pair of numbers: ");
        scanf("%d%d", &integer1, &integer2);

        printf("%s\n", multiple(integer1, integer2) ? "true" : "false");
    }

    return 0;
}

int multiple(int integer1, int integer2) {
    return integer1 % integer2 == 0;
}
