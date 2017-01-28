#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 256; ++i) {
        int j = i;
        int bin = 0;
        int place = 1;
        
        while (j > 0) {
            bin += j % 2 * place;
            j >>= 1;
            place *= 10;
        }

        printf("%3d %09d %3o %3X\n", i, bin, i, i);
    }

    return 0;
}
