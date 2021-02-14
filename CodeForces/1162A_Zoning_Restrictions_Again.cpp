#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, m, ans=0, l, r, x, ara[100];
    for(int i=0; i<60; i++)
        ara[i]=-1;
    cin>>n>>h>>m;
    while(m--)
    {
        scanf("%d %d %d", &l, &r, &x);
        for(int i=l; i<=r; i++)
        {
            if(ara[i]!=-1)
                ara[i] = min(ara[i], x);
            else ara[i]=x;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(ara[i]==-1 || ara[i]>h)
            ans+=h*h;
        else ans+=ara[i]*ara[i];
    }

    printf("%d\n", ans);

    return 0;
}
