#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0, x;
    scanf("%d", &n);
    int ara[n*n];
    for(int i=0; i<n*n; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara+(n*n));
    for(int i=0; i<n*n; i++)
    {
        printf("%d ..", ara[i]);
    }

    if(n%2) x=n-1;
    else x=n;
    for(int i=0; i<x; i++)
    {
        ans-=ara[i];
        ans+=ara[(n*n)-1-i];
    }
    printf("%d\n", ans);

    return 0;
}
