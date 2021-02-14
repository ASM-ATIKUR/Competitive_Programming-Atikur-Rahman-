#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    long long arr[10],ara[100009],i,l,r, a, b, c, d, e, m, q;
    char x;
    char s[100];
    for(i=0; i<5; i++) cin>>arr[i];
    cin>>m>>q;
    for(i=0; i<m; i++)
    {
        cin>>ara[i];
        if(i!=0)
        {
            ara[i]=ara[i]+ara[i-1];
        }
    }
    for(i=0; i<q; i++)
    {
        scanf("%s %lld %lld", s, &l, &r);
        printf("%lld %lld....\n", ara[r-1]-ara[l-2],arr[s[0]-'A']);
        if(ara[r-1]-ara[l-2]<=arr[s[0]-'A'])
            cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
