/**
 * factorial-while.c
 *
 * 4! = 4 * 3 * 2 * 1;
 */
#include <stdio.h>

int main(void)
{
    int number;
    int result = 1;

    int i = number = 6;

    while (i > 1) {
        result *= i;
        i--;
    }

    printf("%d! = %d\n", number, result);

    return 0;
}
