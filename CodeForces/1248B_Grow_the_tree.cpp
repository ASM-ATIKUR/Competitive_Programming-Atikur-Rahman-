#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ara[100009], i,j, x=0, y=0;
    cin>>n;
    for(i=0; i<n; i++)
        scanf("%lld", &ara[i]);
    sort(ara, ara+n);
    for(i=0, j=n-1; i<j; i++, j--)
    {
        x+=ara[j];
        y+=ara[i];
    }
    if(n&1) x+=ara[n/2];
    printf("%lld\n", x*x+y*y);

    return 0;
}
