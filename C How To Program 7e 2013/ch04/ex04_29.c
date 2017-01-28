#include <stdio.h>

int main(void) {
    int a, b, g, i, j, x, y;

    x = 4;
    y = 6;

    if ((!(x < 5) && !(y >= 7)) == !(x < 5 || y >= 7)) {
        puts("true");
    } else {
        puts("false");
    }

    x = 6;
    y = 6;

    if ((!(x < 5) && !(y >= 7)) == !(x < 5 || y >= 7)) {
        puts("true");
    } else {
        puts("false");
    }

    x = 4;
    y = 8;

    if ((!(x < 5) && !(y >= 7)) == !(x < 5 || y >= 7)) {
        puts("true");
    } else {
        puts("false");
    }

    x = 6;
    y = 8;

    if ((!(x < 5) && !(y >= 7)) == !(x < 5 || y >= 7)) {
        puts("true\n");
    } else {
        puts("false\n");
    }

    a = 5;
    b = 5;
    g = 5;

    if ((!(a == b) || !(g != 5)) == !(a == b && g != 5)) {
        puts("true");
    } else {
        puts("false");
    }

    a = 4;
    b = 5;
    g = 5;

    if ((!(a == b) || !(g != 5)) == !(a == b && g != 5)) {
        puts("true");
    } else {
        puts("false");
    }

    a = 5;
    b = 5;
    g = 4;

    if ((!(a == b) || !(g != 5)) == !(a == b && g != 5)) {
        puts("true");
    } else {
        puts("false");
    }

    a = 4;
    b = 5;
    g = 4;

    if ((!(a == b) || !(g != 5)) == !(a == b && g != 5)) {
        puts("true\n");
    } else {
        puts("false\n");
    }

    x = 7;
    y = 3;

    if (!(x <= 8 && y > 4) == (!(x <= 8) || !(y > 4))) {
        puts("true");
    } else {
        puts("false");
    }

    x = 9;
    y = 3;

    if (!(x <= 8 && y > 4) == (!(x <= 8) || !(y > 4))) {
        puts("true");
    } else {
        puts("false");
    }

    x = 7;
    y = 5;

    if (!(x <= 8 && y > 4) == (!(x <= 8) || !(y > 4))) {
        puts("true");
    } else {
        puts("false");
    }

    x = 9;
    y = 5;

    if (!(x <= 8 && y > 4) == (!(x <= 8) || !(y > 4))) {
        puts("true\n");
    } else {
        puts("false\n");
    }

    i = 3;
    j = 5;

    if (!(i > 4 || j <= 6) == (!(i > 4) && !(j <= 6))) {
        puts("true");
    } else {
        puts("false");
    }

    i = 5;
    j = 5;

    if (!(i > 4 || j <= 6) == (!(i > 4) && !(j <= 6))) {
        puts("true");
    } else {
        puts("false");
    }

    i = 3;
    j = 7;

    if (!(i > 4 || j <= 6) == (!(i > 4) && !(j <= 6))) {
        puts("true");
    } else {
        puts("false");
    }

    i = 5;
    j = 7;

    if (!(i > 4 || j <= 6) == (!(i > 4) && !(j <= 6))) {
        puts("true");
    } else {
        puts("false");
    }

    return 0;
}
