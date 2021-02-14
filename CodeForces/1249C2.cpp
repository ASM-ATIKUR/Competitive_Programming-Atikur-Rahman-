#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ara[45],ans, ax[45],q, n, i, x, y;
    ara[0]=1;
    ara[1]=3;
    ax[0]=1;
    ax[1]=4;
    for(i=2; i<=39; i++)
    {
        ara[i]=ara[i-1]*3;
        ax[i]=ax[i-1]+ara[i];
        //printf("%lld...%lld...\n", ara[i], ax[i-1]);
    }
    cin>>q;
    while(q--)
    {
        scanf("%lld", &n);
        i=39;
        x=0;
        while(i--)
        {
            if(ax[i]>=n)
            {
                x=ax[i];
            }
        }
        ans=x;
        i=39;
        while(i--)
        {
            if(ans-ara[i]>=n)
            {
                ans-=ara[i];
            }
        }
        i=39;
        while(i--)
        {
            if(ara[i]>=n)
            {
                x=ara[i];
            }
        }
        printf("%lld\n", min(x, ans));
    }

    return 0;
}
