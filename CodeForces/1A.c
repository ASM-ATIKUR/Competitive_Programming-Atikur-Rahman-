#include <stdio.h>
#include <math.h>

int main()
{
    double n, m, a;
    double p, q;

    scanf(" %lf %lf %lf", &n, &m, &a);

    p = ceil(n/a);
    q = ceil(m/a);

    printf("%lld", (long long int)(p*q));

    return 0;

}
