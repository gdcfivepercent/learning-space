/**
 * great than
 */
#include <stdio.h>

int main(void)
{
    int a, b;

    a = 5;
    b = 7;

    if (a > b) {
        printf("%d is great than %d\n", a, b);
    } else {
        printf("%d is not great than %d\n", a, b);
    }

    return 0;
}
