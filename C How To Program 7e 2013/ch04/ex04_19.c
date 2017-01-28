#include <stdio.h>

int main(void) {
    int productNumber, quantitySold;
    double totalRetail = 0.0;

    for (int i = 0; i < 35; ++i) {
        scanf("%d%d", &productNumber, &quantitySold);

        switch (productNumber) {
            case 1:
                totalRetail += 2.98 * quantitySold;
                break;

            case 2:
                totalRetail += 4.50 * quantitySold;
                break;

            case 3:
                totalRetail += 9.98 * quantitySold;
                break;

            case 4:
                totalRetail += 4.49 * quantitySold;
                break;

            case 5:
                totalRetail += 6.87 * quantitySold;
                break;
        }
    }

    printf("\nThe total retail value of all products sold last week is %.2lf\n", totalRetail);

    return 0;
}