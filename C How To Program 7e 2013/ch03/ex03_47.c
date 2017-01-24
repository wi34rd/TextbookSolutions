#include <stdio.h>

int main(void) {
    int birthdayDay, birthdayMonth, birthdayYear;
    int currentDay, currentMonth, currentYear;
    int age, maxHeartRate;
    
    printf("Enter your birthday: ");
    scanf("%d%d%d", &birthdayMonth, &birthdayDay, &birthdayYear);

    printf("Enter current day: ");
    scanf("%d%d%d", &currentMonth, &currentDay, &currentYear);

    age = currentYear - birthdayYear;
    
    if (currentMonth < birthdayMonth || (currentMonth == birthdayMonth && currentDay < birthdayDay)) {
        --age;
    }

    maxHeartRate = 220 - age;

    printf("Your age is %d\nMaximum heart rate is %d\nTarget heart rate is %d - %.0f\n", age, maxHeartRate, maxHeartRate / 2, maxHeartRate * .85);

    return 0;
}