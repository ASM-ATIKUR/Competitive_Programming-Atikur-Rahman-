#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[109];
    ara[1]=1;
    for(int i=2; i<=n; i++)
    {
        ara[i]=(i-1)*4+ara[i-1];
    }
    cout<<ara[n]<<endl;

    return 0;
}
