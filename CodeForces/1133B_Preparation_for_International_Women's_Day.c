#include <stdio.h>

int main()
{
    int n, k, i, j, count=0;
    scanf("%d %d", &n, &k);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[i]!=0 && ara[j]!=0)
            {
                if(((ara[i]+ara[j])%k)==0)
                {
                    count+=2;
                    ara[i]=0;
                    ara[j]=0;

                    break;
                }
            }
        }
    }
    printf("%d\n", count);

    return 0;
}
