#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h, w, i, j, ans=1;
    cin>>h>>w;
    long long a[h+9],b[w+9];
    for(i=1; i<=h; i++)
        scanf("%lld", &a[i]);
    for(i=1; i<=w; i++)
        scanf("%lld", &b[i]);

    for(i=1; i<=h; i++)
    {
        for(j=1; j<=w; j++)
        {

            if(j==a[i]+1 && i<=b[j])
            {
                ans=0;
                goto jump;
            }
            else if(j<=a[i] && i==b[j]+1)
            {
                ans=0;
                goto jump;
            }
            else if(j>a[i]+1 && i>b[j]+1)
            {
                ans=(ans*2)%1000000007;
                //printf("%lld***%lld %lld..............\n",ans, i,j);
                //printf("%lld %lld..%lld %lld...\n", i,j, a[i], b[j]);
            }

        }
    }
    jump:
    printf("%lld\n", ans);

    return 0;
}
