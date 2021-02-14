#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, h, w, p, a, ans;
    while(scanf("%d %d %d %d", &n, &b, &h, &w)==4)
    {
        ans=INT_MAX;
        while(h--)
        {
            cin>>p;
            int x=w;
            while(x--)
            {
                cin>>a;
                if(a>=n)
                {
                    ans=min(ans, a*p);
                }
            }
        }
        if(ans<=b) cout<<ans<<endl;
        else cout<<"stay home\n";
    }
    return 0;
}
