#include <stdio.h>

int main(void)
{
    int a = 23;
    int c;

    c = ~a;
    printf("~%d = %d\n", a, c);

    return 0;
}
