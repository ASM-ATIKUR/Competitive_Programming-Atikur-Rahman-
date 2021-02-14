#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ara[4], i, ans=0;
    for(i=0; i<4; i++)
        scanf("%lld", &ara[i]);
    sort(ara, ara+3);
    if(ara[1]-ara[0]<ara[3])
    {
        ans=ara[3]-(ara[1]-ara[0]);
    }
    if(ara[2]-ara[1]<ara[3])
    {
        ans+=ara[3]-(ara[2]-ara[1]);
    }

    cout<<ans<<endl;

    return 0;
}
