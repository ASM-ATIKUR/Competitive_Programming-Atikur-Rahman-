#include <stdio.h>

int main(void)
{
    long long int n, i, a, b, sum, x;
    scanf("%lld", &n);

    sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld", &x);
        sum+=x;
    }
    a=sum;
    sum=0;
    for(i=0; i<n-1; i++)
    {
        scanf("%lld", &x);
        sum+=x;
    }
    a=a-sum;
    b=sum;
    sum=0;
    for(i=0; i<n-2; i++)
    {
        scanf("%lld", &x);
        sum+=x;
    }
    printf("%lld\n", a);
    printf("%lld\n", b-sum);

    return 0;

}
