/**
 * all-equal.c
 * a == b and b == c
 */
#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = 3;
    b = 4;
    c = 5;

    if (a == b && b == c) {
        printf("a, b, c are equal to each other\n");
    } else {
        printf("a, b, c are not equal to each other\n");
    }

    return 0;
}
