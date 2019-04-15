#include <stdio.h>

int main(void)
{
    int a[7] = {1, 1, 2, 3, 5, 8, 13};
    int i;
    int *p;

    for (i = 0; i < 7; i++) {
        printf("%d\n", a[i]);
    }

    for (i = 0; i < 7; i++) {
        printf("%d\n", *(a+i));
    }

    p = &a[0];
    i = 0;
    while (i < 7) {
        printf("%d\n", *p);
        i++;
        p++;
    }

    p = &a[0];
    i = 0;
    while (i < 7) {
        printf("%d\n", *(p+i));
        i++;
    }

    return 0;
}
