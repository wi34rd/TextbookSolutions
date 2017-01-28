#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 500; ++i) {
        for (int j = i; j <= 500; ++j) {
            for (int k = 1; k <= 500; ++k) {
                if (i * i + j * j == k * k) {
                    printf("%3d %3d %3d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}
