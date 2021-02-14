#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, mx=0,mn=0, tmp;
    cin>>n>>m;
    tmp= n-m+1;
    mx= (tmp*(tmp-1))/2;
    tmp= n/m;
    int x= n%m;
    tmp= tmp+1;
    mn= x*((tmp*(tmp-1))/2);
    tmp--;
    mn += (m-x)*((tmp*(tmp-1))/2);

    printf("%lld %lld", mn, mx);

    return 0;
}
