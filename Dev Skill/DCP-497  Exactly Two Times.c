#include <stdio.h>

int main()
{
    int t, n, i, j, k, ans;

    scanf(" %d", &t);
    for(j=0; j<t; j++)
    {
        scanf(" %d", &n);
        int ara[n];
        for(i=0; i<n; i++)
        {
            ara[i]=0;
        }
        for(i=0; i<n; i++)
        {
            scanf(" %d", &k);
            if(ara[k]==0)
            {
                ara[k]++;
            }
            else if (ara[k]==1)
            {
                ans=k;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
