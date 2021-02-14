#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cnt=0, ans=0, n;
    char str[110];

    cin>>t;
    while(t--)
    {
        cnt=0; ans=0;
        cin>>n;
        scanf("%s", str);

        for(int i=0; i<n; i++)
        {
            if(str[i]=='>')
                break;
            cnt++;
        }
        ans=cnt;
        cnt=0;
        for(int i=n-1; i>=0; i--)
        {
            if(str[i]=='<')
                break;
            cnt++;
        }
        ans=min(cnt, ans);

        cout<<ans<<endl;
    }

    return 0;
}
