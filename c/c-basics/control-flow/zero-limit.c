#include <stdio.h>

int main(void)
{
    int number;
    number = -5;

    if (number > 0) {
        printf("%d\n", 1);
    } else if (number < 0) {
        printf("%d\n", -1);
    } else {
        printf("%d\n", 0);
    }

    return 0;
}
