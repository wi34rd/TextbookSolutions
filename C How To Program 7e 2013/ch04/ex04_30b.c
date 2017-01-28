#include <stdio.h>

int main(void) {
    int grade;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");

    while ((grade = getchar()) != EOF) {
        if (grade == 'A' || grade == 'a') {
            ++aCount;
            continue;
        }
        
        if (grade == 'B' || grade == 'b') {
            ++bCount;
            continue;
        }
        
        if (grade == 'C' || grade == 'c') {
            ++cCount;
            continue;
        }
        
        if (grade == 'D' || grade == 'd') {
            ++dCount;
            continue;
        }
        
        if (grade == 'F' || grade == 'f') {
            ++fCount;
            continue;
        }
        
        if (grade == '\n' || grade == '\t' || grade == ' ') {
            continue;
        }

        puts("Incorrect letter grade entered. Enter a new grade.");
    }
    
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
    
    return 0;
}