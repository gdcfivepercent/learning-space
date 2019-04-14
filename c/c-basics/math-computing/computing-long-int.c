#include <stdio.h>

int main(void)
{
    long int x, y;

    x = 23;
    y = 6;

    printf("%ld + %ld = %ld\n", x, y, x+y);
    printf("%ld - %ld = %ld\n", x, y, x-y);
    printf("%ld * %ld = %ld\n", x, y, x*y);
    printf("%ld / %ld = %ld\n", x, y, x/y);
    printf("%ld %% %ld = %ld\n", x, y, x%y);

    printf("%ld * %ld * %ld = %ld\n", x, x, x, x * x * x); // rcx, rdx, r8
    printf("%ld * %ld * %ld * %ld = %ld\n", y, y, y, y, y * y * y * y); // rcx, rdx, r8, r9

    return 0;
}
