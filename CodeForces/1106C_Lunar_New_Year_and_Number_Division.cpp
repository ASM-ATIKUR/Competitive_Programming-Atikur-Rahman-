#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    long long sum=0;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara+n);
    for(i=0; i<n/2; i++)
    {
        sum+=(ara[i]+ara[n-i-1])*(ara[i]+ara[n-i-1]);
    }
    cout<<sum<<"\n";

    return 0;
}
