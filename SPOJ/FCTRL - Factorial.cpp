#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n;
    cin>>t;
    while(t--)
    {
        scanf("%d", &n);
        int ans=0;
        for(i=5; n/i>=1; i*=5)
        {
            ans+=(n/i);
        }
        printf("%d\n", ans);
    }

    return 0;
}
