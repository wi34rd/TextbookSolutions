#include <stdio.h>

int main(void) {
    int a;

    a = 5;
    printf("a   = %d\n", a);
    printf("--a = %d\n", --a);
    printf("a   = %d\n\n", a);
    
    a = 5;
    printf("a   = %d\n", a);
    printf("a-- = %d\n", a--);
    printf("a   = %d\n", a);
    
    return 0;
}