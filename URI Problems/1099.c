#include <stdio.h>

int main()
{
    int n, a, b, x, y, i, j, sum =0;
    scanf(" %d", &n);
    int ara[n];

    for(i=0; i<n; i++)
    {
        scanf(" %d %d", &a, &b);
        if(a>b)
        {
            x = b;
            y = a;
        }
        else
        {
            x = a;
            y = b;
        }
        for(j=++x; j<y; j++)
        {
            if(j&2!=0)
            {
                sum+=j;
            }

        }
        ara[i]=sum;
        sum=0;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}
