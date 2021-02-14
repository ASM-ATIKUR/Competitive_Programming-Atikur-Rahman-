#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    n*=2;
    int ara[n], i, x=0, y=0;
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    sort(ara, ara+n);
    for(i=0; i<n/2; i++)
        x+=ara[i];
    for(; i<n; i++)
        y+=ara[i];

    if(x!=y)
    {
        for(i=0; i<n; i++)
        {
            if(i!=n-1)
                printf("%d ", ara[i]);
            else printf("%d\n", ara[i]);
        }
    }
    else printf("-1\n");

    return 0;
}
