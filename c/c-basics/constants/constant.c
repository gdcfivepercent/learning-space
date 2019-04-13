#include <stdio.h>

int main(void)
{
    const double PI = 3.14;

    double r = 5;
    double c, s;

    c = 2 * PI * r;
    s = PI * r * r;

    printf("r = %.2lf, c = %.2lf\n", r, c);
    printf("r = %.2lf, s = %.2lf\n", r, s);
    return 0;
}
