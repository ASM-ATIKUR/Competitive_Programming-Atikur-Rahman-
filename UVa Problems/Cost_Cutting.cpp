#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, t, cs=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        printf("Case %d: %d\n", cs++, (a+b+c)-(max(a,max(b,c))+min(a,min(b,c))));
    }
    return 0;
}
