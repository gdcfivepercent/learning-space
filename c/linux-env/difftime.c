#include <time.h>
#include <stdio.h>

int main(void)
{
    int i;
    time_t time_start, time_end;
    time_start = time((time_t *)0);
    for (i = 0; i <= 999999; i++) {
        printf("%d\n", i);
    }
    time_end = time((time_t *)0);
    printf("%lf\n", difftime(time_end, time_start));
    return 0;
}
