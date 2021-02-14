#include <stdio.h>

int main(void)
{
    int n, a, i, j,k, ara[110], count=0;
    scanf("%d %d", &n, &a);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
    }

    if((n-a)< a)
    {
        j=a+1;
        k=a-1;
        if(ara[a]==1) count++;
        for(;j<=n; j++, k--)
        {
            if(ara[j]==ara[k])
                count+=2*ara[j];
        }
        for(;k>0; k--)
        {
            if(ara[k])
                count++;
        }

    }
    else
    {
        j=a+1;
        k=a-1;
        if(ara[a]==1) count++;
        for(;k>0; j++, k--)
        {
            if(ara[j]==ara[k])
                count+=2*ara[j];
        }
        for(;j<=n; j++)
        {
            if(ara[j])
                count++;
        }
    }
    printf("%d\n", count);
}
