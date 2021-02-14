#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, t, j;

    scanf(" %d", &t);

    for(i=0; i<t; i++)
    {
        scanf(" %d", &n);

        for(j=sqrt(n)-2; j<sqrt(n)+5; j++)
        {
            if(j*j==n)
            {
                printf("Case %d: YES\n", i+1);
                break;
            }
        }
        if(j*j!=n)
        {
            printf("Case %d: NO\n", i+1);
        }


    }

    return 0;
}
