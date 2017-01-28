#include <stdio.h>

int main(void) {
    double population = 7.0, old_population;
    
    for (unsigned i = 1; i <= 75; ++i) {
        old_population = population;
        population += population * 0.011;

        printf("%2u%11f%10f\n", i, population, population - old_population);
    }

    return 0;
}

// 64
