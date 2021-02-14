#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y, k, z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k;
        z=x+y;
        if((z/k)%2)
            printf("Paja\n");
        else printf("Chef\n");
    }
    return 0;
}
