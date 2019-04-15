#include <stdio.h>

int main(void)
{
    int age;
    age = 26;

    if (age >= 18) {
        printf("age %d is adult\n", age);
    } else {
        printf("age %d is not adult\n", age);
    }

    return 0;
}
