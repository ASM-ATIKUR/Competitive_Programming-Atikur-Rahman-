#include <stdio.h>

int main()
{
    int a, n, l, i, j, temp, min, t;

    scanf("%d %d", &n, &l);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf(" %d", &ara[i]);
    }
    for(i=0; i<n; i++)
    {
        min=ara[i];
        a=i;
        for(j=i+1; j<n; j++)
        {
            if(ara[j]<min)
            {
                min=ara[j];
                a=j;
            }
        }
        temp = ara[i];
        ara[i]=ara[a];
        ara[a]=temp;
    }
    t=0;
    if(2*ara[0]>t) t=2*ara[0];
    if(2*(l-ara[n-1])> t) t= 2*(l-ara[n-1]);

    for(i=0; i<n-1; i++)
    {
        if((ara[i+1]-ara[i])>t) t=(ara[i+1]-ara[i]);
    }

    printf("%.9f\n", (double)t/2.0);

    return 0;

}
