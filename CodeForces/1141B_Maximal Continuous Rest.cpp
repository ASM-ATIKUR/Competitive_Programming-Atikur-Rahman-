#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0, flag=0, ans=0;

    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {

        cin>>a[i];

        if(a[i])
        {
            cnt++;
        }
        else
        {
            ans= max(cnt, ans);
            cnt=0;
        }

    }
    if(a[n-1])
    {
        for(int i=0; i<n; i++)
        {
            if(a[i])
            {
                cnt++;
            }
            else
            {
                ans= max(cnt, ans);
                cnt=0;
            }
        }
    }

    cout<<ans<<"\n";

    return 0;
}
