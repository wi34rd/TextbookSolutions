#include <stdio.h>

int main(void) {
    int integersNumber, integer, min;

    scanf("%d", &integersNumber);
    scanf("%d", &min);

    for (int i = 0; i < integersNumber - 1; ++i) {
        scanf("%d", &integer);
        
        if (integer < min) {
            min = integer;
        }
    }

    printf("\nThe smallest of the integers is %d\n", min);

    return 0;
}