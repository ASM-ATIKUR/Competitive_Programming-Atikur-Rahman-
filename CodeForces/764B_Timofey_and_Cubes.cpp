#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n], i;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<n/2; i+=2)
    {
        ara[i]^=ara[n-i-1];
        ara[n-i-1]^=ara[i];
        ara[i]^=ara[n-i-1];
    }
    for(i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<< "\n";

    return 0;
}
