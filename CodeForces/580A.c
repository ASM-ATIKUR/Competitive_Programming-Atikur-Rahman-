#include <stdio.h>

int main()
{
    int n, i, j, max=0, count=0, ans=0;

    scanf("%d", &n);
    int ara[n];

    for(i=0; i<n; i++)
    {
        scanf(" %d", &ara[i]);
        if(ara[i]>=max)
        {
            max=ara[i];
            count++;
        }
        else
        {
            max=ara[i];
            if(count>ans) ans=count;
            count=1;
        }
        if(i==n-1)
        {
            if(count>ans) ans=count;
        }
    }
    printf("%d\n", ans);

    return 0;
}
