#include <stdio.h>

long long int div_count(long long int n);
int main()
{
    long long int n, i, x;
    scanf("%lld", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &x);
        if(div_count(x)==3) ara[i]=1;
        else ara[i]=0;
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

long long int div_count(long long int n)
{
    long long int count=0, i, j, div_c=1;

    while(n%2==0)
    {
        count++;
        n/=2;
    }
    div_c*=(count+1);
    for(i=3; i<=n; i+=2)
    {
        count=0;
        while(n%i==0)
        {
            count++;
            n/=i;
        }
        div_c*=(count+1);
    }
    return div_c;
}
