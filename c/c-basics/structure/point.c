#include <stdio.h>
#include <math.h>

int main(void)
{
    struct point {
        double x;
        double y;
    };

    struct point A = { 3, 4 };
    struct point *p = &A;

    printf("A is (%.2lf, %.2lf)\n", A.x, A.y);
    printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));

    printf("A is (%.2lf, %.2lf)\n", p->x, p->y);
    printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));

    return 0;
}
