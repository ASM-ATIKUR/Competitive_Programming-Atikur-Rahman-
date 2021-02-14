#include <bits/stdc++.h>
using namespace std;
int ck[1000009];
int main()
{
    int t, n , k, d, ara[200009], i, j, y, ans;
    cin>>t;
    while(t--)
    {
        scanf("%d %d %d", &n, &k, &d);
        ans=INT_MAX;
        for(i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
            ck[ara[i]]=0;
        }
        y=0;
        for(i=0; i<d; i++)
        {
            if(ck[ara[i]]==0) y++;
            ck[ara[i]]++;
        }
        ans = y;
        for(i=0, j=d; i<n-d+1 && j<n; i++, j++)
        {
            if(ck[ara[i]])ck[ara[i]]--;
            if(ck[ara[i]]==0) y--;
            if(ck[ara[j]]==0) {y++;}
            ck[ara[j]]++;
            //printf("%d..%d!!%d..%d %d\n", y, i, j, ck[ara[i]], ara[i]);;
            ans=min(ans,y);
        }
        ans=min(ans, y);
        printf("%d\n", ans);
    }
    return 0;
}

