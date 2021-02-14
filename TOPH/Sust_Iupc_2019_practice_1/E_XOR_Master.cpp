#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n, a, lst, cnt=0,  i;
    long long ans=0;
    int ara[100009];
    scanf("%lld", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara+n);
    lst=0;
    for(i=1; i<n; i++)
    {
        if(ara[i]==ara[lst])
        {
            ans+=lst;
        }
        else
        {
            ans+=i;
            lst=i;
        }
    }
    printf("%lld\n", ans);
    return 0;

}
