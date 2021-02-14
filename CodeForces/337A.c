#include <stdio.h>

int main()
{
    int ara[50], n, m, i, j, min, temp, k, ans=2000;
    scanf(" %d %d" , &n, &m);

    for(i=0; i<m; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<m; i++)
    {
        min=1001;
        for(j=i; j<m; j++)
        {
            if(ara[j]<min)
            {
                min=ara[j];
                k=j;
            }
        }
        temp = ara[i];
        ara[i] = min;
        ara[k] = temp;
    }
    for(i=0; i<m-n+1; i++)
    {
        if((ara[i+n-1]-ara[i])<ans) ans=(ara[i+n-1]-ara[i]);
    }
    printf("%d\n", ans);
    return 0;
}
