#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n], i, mn=INT_MAX;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        mn= min(ara[i],mn);
    }
    //sort(ara, ara+n);
    cout<<(ara[2]^mn)+2;

    return 0;
}
