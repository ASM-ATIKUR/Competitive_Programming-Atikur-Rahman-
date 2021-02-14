#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, x, ans=0;
    cin>>n>>m>>k;
    int ara[m+2];
    for(int i=0; i<=m; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(int i=0; i<m; i++)
    {

        x= ara[i]^ara[m];
        int cnt=0;
        while(x>0)
        {
            if(x&1)
                cnt++;
            //cout<<x<<endl;
            x=x>>1;
        }
        if(cnt<=k)
        {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
