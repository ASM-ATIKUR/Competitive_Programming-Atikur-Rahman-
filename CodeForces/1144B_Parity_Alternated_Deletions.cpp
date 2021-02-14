#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v1, v2;
    int ara[n], i, sum=0, ec=0, oc=0;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]%2)
            {oc++; v1.push_back(ara[i]);}
        else {ec++; v2.push_back(ara[i]);}
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(ec<oc)
    {
        for(i=0; i<oc-ec-1; i++)
        {
            sum+=v1[i];
        }
    }
    else
    {
        for(i=0; i<ec-oc-1; i++)
            sum+=v2[i];
    }
    cout<<sum<<endl;

    return 0;
}
