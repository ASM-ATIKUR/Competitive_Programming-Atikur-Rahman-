#include <stdio.h>

int main()
{
    int n, i, j;

    while (scanf(" %d", &n)!=EOF)
    {
        int ara[n][n];
        int s, t;
        s=0;
        t=n-1;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==t)
                {
                    ara[i][j]=2;
                }
                else if(j==s)
                {
                    ara[i][j]=1;

                }
                else
                {
                    ara[i][j]=3;
                }
                printf("%d", ara[i][j]);
            }
            printf("\n");
            s++;
            t--;
        }
    }

    return 0;
}
