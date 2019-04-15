#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    a = 20;
    b = 7;
    op = '+';

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
        case '/':
            printf("%d / %d = %d\n", a, b, a/b);
        default:
            printf("Not supported!\n");
    }

    return 0;
}
