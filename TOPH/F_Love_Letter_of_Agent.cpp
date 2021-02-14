#include <bits/stdc++.h>
using namespace std;

long long md(long long x,long long n,long long M)
{
    long long result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}
int main()
{
    long long t, n, p, q;
    cin>>t>>n;

    printf("%lld\n", md(t, n, 10000000009));

    return 0;
}
