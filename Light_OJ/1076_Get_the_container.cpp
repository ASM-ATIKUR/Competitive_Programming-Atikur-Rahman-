#include <bits/stdc++.h>
using namespace std;
int vas[1009], n,m;
int chk(int sz)
{
    int cnt=1, i, sm=0;
    for(i=0; i<n; i++)
    {
        if(sm+vas[i]<=sz) sm+=vas[i];
        else{
            sm=vas[i];
            cnt++;
        }
    }
    return cnt;
}
int bsrch(int l, int r)
{
    int mid, ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        //printf("%d %d__%d..%d..\n", l,r,mid, chk(mid));
        if(chk(mid)<=m)
        {
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }
    return ans;
}
int main()
{
    int t, cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int i, left=0, right=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &vas[i]);
            left=max(left, vas[i]);
            right+=vas[i];
        }
        printf("Case %d: %d\n", cs++, bsrch(left, right));
    }
    return 0;
}
