#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ara[111], n, m, i, ans=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara+n);

    for(i=0; i<m; i++)
    {
        if(ara[i]<0)ans+=ara[i];
    }
    printf("%d\n", abs(ans));

    return 0;
}
