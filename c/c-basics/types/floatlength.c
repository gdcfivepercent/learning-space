#include <stdio.h>

int main(void)
{
    printf("      float: %zd\n", sizeof(float));
    printf("     double: %zd\n", sizeof(double));
    printf("long double: %zd\n", sizeof(long double));
    return 0;
}
