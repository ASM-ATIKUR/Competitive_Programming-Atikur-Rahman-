#include <bits/stdc++.h>

using namespace std;


int main()
{
    int ara[3], n, i, j, a, c, ans=0;
    scanf("%d %d %d %d", &n, &ara[0], &ara[1], &ara[2]);
    sort(ara, ara+3);

    a=n/ara[0];
    for(i=a; i>=0; i--)
    {
        for(j=0; ara[0]*i+ara[1]*j<=n; j++)
        {
            c=(n-(ara[0]*i+ara[1]*j))/ara[2];
            if(ara[0]*i+ara[1]*j+ara[2]*c==n)
            {
                ans=max(i+j+c, ans);

            }
        }
    }


    printf("%d\n", ans);

    return 0;
}
