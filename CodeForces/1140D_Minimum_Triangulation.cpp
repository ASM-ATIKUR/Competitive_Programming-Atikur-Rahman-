#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0, i;
    cin>>n;

    for(i=2; i<n; i++)
    {
        ans+= i*(i+1);
    }
    cout<<ans<<endl;

    return 0;
}
