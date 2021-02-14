#include <bits/stdc++.h>
using namespace std;

const long long m=1e9+7;
int main()
{
    long long x, y, n, fg, ans;
    cin>>x>>y>>n;

    switch(n%6)
    {
        case 0: ans= x-y;
        break;
        case 1: ans= x;
        break;
        case 2: ans= y;
        break;
        case 3: ans= y-x;
        break;
        case 4: ans= -x;
        break;
        case 5: ans= -y;
        break;
    }
    if((ans%m)>=0) printf("%lld\n", ans%m);
    else printf("%lld\n", (ans%m)+m);

    return 0;
}
