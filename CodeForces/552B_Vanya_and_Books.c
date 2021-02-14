#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, dig=0, num=9, cnt=0, i, nn;
    scanf("%lld", &n);
    int x=n;
    while(x>0)
    {
        dig++;
        x/=10;
    }
    dig--;
    for(i=1; i<=dig; i++)
    {
        cnt+=(num*i);
        n-=num;
        num*=10;
    }
    cnt+=n*(dig+1);
    printf("%lld\n", cnt);

    return 0;
}
