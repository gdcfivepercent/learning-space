#include <stdio.h>

int main(void)
{
    int a = 100;
    int *p;
    p = &a;

    printf("%d\n", *p); // use pointer to access var a

    printf("%p\n", &a); // output the address of var a
    printf("%p\n", p); // output the value of p

    return 0;
}
