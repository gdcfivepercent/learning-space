#include <stdio.h>

int sum(int a, int b);

int main(void)
{
    printf("%d\n", sum(3, 5));
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
