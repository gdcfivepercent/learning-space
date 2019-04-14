#include <stdio.h>

int main(void)
{
    int x, y;

    x = 23;
    y = 6;

    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);
    printf("%d * %d = %d\n", x, y, x*y);
    printf("%d / %d = %d\n", x, y, x/y);
    printf("%d %% %d = %d\n", x, y, x%y);

    return 0;
}
