#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    long long int ans, n;
    scanf("%lld", &x);
    n=0;
    while(x>0)
    {
        ans=floor(log(x)/log(2));
        x=x-pow(2, ans);
        n++;
    }
    printf("%lld\n", n);

    return 0;
}
