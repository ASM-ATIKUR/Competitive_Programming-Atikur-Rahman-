#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, i, ans=1;
    scanf("%lld", &n);
    i=n;
    while(n--)
    {
        ans*=2;
    }
    printf("%lld\n", ans-(i/2));

    return 0;
}


