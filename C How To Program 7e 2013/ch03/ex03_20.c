#include <stdio.h>

int main(void) {
    int hoursWorked;
    float hourlyRate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hoursWorked);
    
    while (hoursWorked != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourlyRate);
        
        printf("Salary is $%.2f\n\n", (hoursWorked > 40 ? 40 + hoursWorked % 40 * 1.5 : hoursWorked) * hourlyRate);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hoursWorked);
    }
    
    return 0;
}