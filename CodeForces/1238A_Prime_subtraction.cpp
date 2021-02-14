#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x-y<2) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
