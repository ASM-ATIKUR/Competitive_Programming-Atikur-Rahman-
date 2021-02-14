#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int a;
    int n, x, i, j;

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d", &x);

        a=pow(2, x)/12000;
        printf("%llu kg\n", a);
    }

    return 0;
}
