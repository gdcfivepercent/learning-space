#include <stdio.h>

int main(void)
{
    printf("    short int: %zd\n", sizeof(short int));
    printf("          int: %zd\n", sizeof(int));
    printf("     long int: %zd\n", sizeof(long int));
    printf("long long int: %zd\n", sizeof(long long int));
    printf("       size_t: %zd\n", sizeof(size_t));
    printf("        void*: %zd\n", sizeof(void*));
    return 0;
}
