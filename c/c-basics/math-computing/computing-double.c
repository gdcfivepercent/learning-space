#include <stdio.h>

int main(void)
{
    double x, y;

    x = 23;
    y = 6;

    printf("%.2lf + %.2lf = %.2lf\n", x, y, x+y);
    printf("%.2lf - %.2lf = %.2lf\n", x, y, x-y);
    printf("%.2lf * %.2lf = %.2lf\n", x, y, x*y);
    printf("%.2lf / %.2lf = %.2lf\n", x, y, x/y);

    return 0;
}
