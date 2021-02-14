#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, m, ara[100009], arr[100009], i, oc, ec;
    cin>>t;
    while(t--)
    {
        scanf("%lld" ,&n);
        oc=ec=0;
        long long x;
        for(i=0; i<n; i++)
        {
            scanf("%lld", &x);
            if(x&1) oc++;
            else ec++;
        }
        scanf("%lld" ,&m);
        long long occ=0, ecc=0;
        for(i=0; i<m; i++)
        {
            scanf("%lld", &x);
            if(x&1) occ++;
            else ecc++;
        }
        printf("%lld\n", occ*oc+ecc*ec);
    }

    return 0;
}
