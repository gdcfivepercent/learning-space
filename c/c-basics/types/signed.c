#include <stdio.h>

int main(void)
{
    int i_age = 23;
    signed int score = 100;
    unsigned int u_score = -3;
    long long int big = -10010110L;

    float income = 12340.66;

    printf("Age: %d\n", i_age);
    printf("Score: %d\n", score);
    printf("Score (unsigned): %u\n", u_score);
    printf("Big: %lld\n", big);
    printf("Income: %f\n", income);

    return 0;
}
