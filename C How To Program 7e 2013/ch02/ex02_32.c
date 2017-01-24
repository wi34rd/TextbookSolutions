#include <stdio.h>

int main(void) {
    int weight, height;

    printf("Enter your weight and height: ");
    scanf("%d%d", &weight, &height);

    int bmi = weight / (height * height);
    printf("Your BMI is %d\n\n", bmi);

    printf("BMI VALUES\nUnderweight: less than 18.5\nNormal:      between 18.5 and 24.9\nOverweight:  between 25 and 29.9\nObese:       30 or greater\n");

    return 0;
}