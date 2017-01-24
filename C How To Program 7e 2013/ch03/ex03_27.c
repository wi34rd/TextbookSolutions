#include <stdio.h>

int main( void )
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while (student <= 10) {
        printf("Enter result ( 1=pass,2=fail ): ");
        scanf("%d", &result);
        
        if (result == 1) {
            passes = passes + 1;
            student = student + 1;
        } else if (result == 2) {
            failures = failures + 1;
            student = student + 1;
        } else {
            puts("Value that you entered is other than 1 or 2, reenter please.");
        }
    }

    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    if (passes > 8) {
        puts("Bonus to instructor!");
    }
}