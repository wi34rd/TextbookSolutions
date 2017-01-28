#include <stdio.h>

int main(void)
{
    int type;
    
    printf("Enter type of employee (-1 to exit): ");
    scanf("%d", &type);
    
    while (type != -1) {
        double salary;
        double hourlyWage;
        int hoursWorked;
        int weeklySales;
        int itemsProduced;
        double money;

        switch (type) {
            case 1:
                printf("Enter manager weekly salary: ");
                scanf("%lf", &salary);
                
                break;

            case 2:
                printf("Enter hourly wage: ");
                scanf("%lf", &hourlyWage);
                
                printf("Enter hours worked: ");
                scanf("%d", &hoursWorked);
                
                salary = (hoursWorked > 40) ? 40.0 * hourlyWage + 1.5 * hourlyWage * (hoursWorked - 40) : hoursWorked * hourlyWage;
                
                break;

            case 3:
                printf("Enter weekly sales: ");
                scanf("%d", &weeklySales);

                salary = 250.0 + weeklySales * 0.057;
                
                break;

            case 4:
                printf("Enter the number of produced items: ");
                scanf("%d", &itemsProduced);
                
                printf("Enter the amount of money for each of the item: ");
                scanf("%lf", &money);

                salary = itemsProduced * money;
                
                break;

            default:
                puts("Incorrect type.\n\n");
        }

        printf("Weekly salary is $%.2lf\n\n", salary);
        
        printf("Enter type of employee (-1 to exit): ");
        scanf("%d", &type);
    }

    return 0;
}