#include <stdio.h>
#include <math.h>

int main(void)
{
    struct point {
        double x;
        double y;
    };

    struct point A = { 3, 4 };

    printf("A is (%.2lf, %.2lf)\n", A.x, A.y);
    printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));

    return 0;
}
