#include <stdio.h>

double sum(double a, double b);

int main(void)
{
    printf("%.2lf\n", sum(3, 5));
    return 0;
}

double sum(double a, double b)
{
    return a+b;
}
