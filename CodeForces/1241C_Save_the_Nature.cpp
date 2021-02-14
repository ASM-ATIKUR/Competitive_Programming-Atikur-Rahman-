#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, ara[200009],i, sum, cnt, x, a, y, b, k;
    cin>>t;
    while(t--)
    {
        scanf("%lld", &n);
        sum=cnt=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld", &ara[i]);
            ara[i]/=100;
        }
        scanf("%lld %lld %lld %lld", &x, &a, &y, &b);
        scanf("%lld", &k);
        sort(ara, ara+n);
        for(i=n-1; i>=0; i--)
        {
            if((n-i)%a==0&&(n-i)%b==0)
                sum+=ara[i]*(x+y);
            else if((n-i)%a==0)
                sum+=ara[i]*x;
            else if((n-i)%b==0)
                sum+=ara[i]*y;
            cnt++;
            if(sum>=k)break;
            printf("%lld..\n", sum);
        }
        if(sum<k) cout<<-1<<endl;
        else printf("%lld\n", cnt);
    }
    return 0;
}
