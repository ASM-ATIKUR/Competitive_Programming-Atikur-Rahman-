#include <stdio.h>

int main()
{
    int n, i, j, k, p;

    while(1)
    {
        scanf(" %d", &n);

        if(n==0)
        {
            break;
        }
        int ara[n][n];
        int m=n;

        for(i=0; i<n; i++)
        {

            for(j=0; j<2; j++)
            {
                for(k=i, p=1; k<m; k++)
                {
                    if(j==0)
                    {
                        ara[i][k] = p;
                    }
                    else
                    {
                        ara[k][i] = p;
                    }
                    p++;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                {
                    printf("%3d", ara[i][j]);
                }
                else{
                    printf(" %3d", ara[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
