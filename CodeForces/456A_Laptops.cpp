#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, flag=0;
    cin>>n;
    vector < pair<int,int> > p(n);

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        p[i].first=a;
        p[i].second=b;
    }
    sort(p.begin(), p.end());
    for(int i=1; i<n; i++)
    {
        if(p[i].first > p[i-1].first)
        {
            if(p[i].second < p[i-1].second)
                flag=1;
        }
    }
    if(flag) cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";

    return 0;

}

