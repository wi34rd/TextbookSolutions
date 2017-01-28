#include <stdio.h>

int main(void) {
    int grade;
    int gradesNumber = 0;
    int gradesSum = 0;
    char averageGrade;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");

    while ((grade = getchar()) != EOF) {
        switch (grade) {
            case 'A':
            case 'a':
                ++gradesNumber;
                gradesSum += 5;
                break;

            case 'B':
            case 'b':
                ++gradesNumber;
                gradesSum += 4;
                break;

            case 'C':
            case 'c':
                ++gradesNumber;
                gradesSum += 3;
                break;

            case 'D':
            case 'd':
                ++gradesNumber;
                gradesSum += 2;
                break;

            case 'F':
            case 'f':
                ++gradesNumber;
                gradesSum += 1;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                puts("Incorrect letter grade entered. Enter a new grade.");
        }
    }

    switch ((int)((double)gradesSum / gradesNumber + .5)) {
        case 5:
            averageGrade = 'A';
            break;

        case 4:
            averageGrade = 'B';
            break;
        
        case 3:
            averageGrade = 'C';
            break;

        case 2:
            averageGrade = 'D';
            break;

        case 1:
            averageGrade = 'F';
            break;
    }
    
    printf("\nThe average grade for the class is %c\n", averageGrade);

    return 0;
}