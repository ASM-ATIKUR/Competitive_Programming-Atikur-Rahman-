#include <stdio.h>
#include <math.h>

int main()
{
    double l, p, q, x;
    scanf("%lf %lf %lf", &l, &p, &q);

    x=(l*p)/(p+q);
    printf("%f\n", x);

    return 0;
}
