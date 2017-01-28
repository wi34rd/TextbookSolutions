#include <stdio.h>

int main(void) {
    double pi = 0.0;

    for (int i = 2; i < 1000000; i += 4) {
        pi += 4.0 / (i - 1);        
        printf("%lf\n", pi);
        pi -= 4.0 / (i + 1);        
        printf("%lf\n", pi);
    }

    return 0;
}

// 119, 1688, 10794, 136121
