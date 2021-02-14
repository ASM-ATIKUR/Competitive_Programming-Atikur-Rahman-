#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, kl, kr;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a) kr=i;
        else kl=i;
    }
    cout<<min(kr, kl);
    return 0;
}
