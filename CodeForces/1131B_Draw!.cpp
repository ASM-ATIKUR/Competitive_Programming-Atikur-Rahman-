#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, dr=1, f=0, s=0, mx, mn, i;
    cin>>n;
    vector < pair<int, int> > v(n);

    for(i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;

        mx=max(f,s);
        mn=min(v[i].first, v[i].second);
        if((v[i].first==f) && (v[i].second==s))
            continue;
        if(f==s) mx++;
        if(mn>=mx)
        {
            dr+=mn-mx+1;
        }
        f=v[i].first;
        s=v[i].second;
    }


    cout<<dr<<"\n";

    return 0;
}
