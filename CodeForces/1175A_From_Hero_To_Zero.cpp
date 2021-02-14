#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, k;
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld", &n, &k);
        long long ans=0;
        while(n)
        {
            ans+=n%k;
            n/=k;
            ans++;
        }
        ans--;
        printf("%lld\n", ans);
    }

    return 0;
}
