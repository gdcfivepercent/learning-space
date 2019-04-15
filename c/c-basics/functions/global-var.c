#include <stdio.h>

double result;

void sum(double a, double b);

int main(void)
{
    sum(100, 200);
    printf("%.2lf\n", result);
    return 0;
}

void sum(double a, double b)
{
    result = a+b;
}
