#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ans=0, pos=0, x;
    scanf("%lld", &n);
    scanf("%lld", &x);
    pos=x;
    ans=x+1;
    while(--n)
    {
        scanf("%lld", &x);
        ans+=abs(x-pos)+2;
        pos=x;
    }
    printf("%lld\n", ans);
    return 0;
}
