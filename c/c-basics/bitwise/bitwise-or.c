#include <stdio.h>

int main(void)
{
    int a = 23;
    int b = 50;
    int c;

    c = a | b;
    printf("%d & %d = %d\n", a, b, c);

    return 0;
}
