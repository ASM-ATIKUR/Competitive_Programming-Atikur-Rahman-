#include <stdio.h>

int main(void)
{
    long long int n, m, total=0, max1=0, max2=0, a;
    scanf("%lld %lld", &n, &m);
    while(n--)
    {
        scanf("%lld", &a);
        if(a>0) max1++;

        if(max2<a) max2=a;

        total+=a;
    }
    if(max1<max2) max1=max2;
    printf("%lld\n", total-max1);

    return 0;
}
