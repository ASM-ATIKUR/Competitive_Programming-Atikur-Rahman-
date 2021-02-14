#include <stdio.h>


int dg(int x)
{
    int dg=0;
    while(1)
    {
        if(x==0)
        {
            return dg;
        }
        dg++;
        x=x/10;
    }
    return dg;
}

int main()
{
    int n, i, j, k, x;

    while(1)
    {
        scanf(" %d", &n);
        int ara[n][n], t=0;
        if(n==0)
        {
            break;
        }

        else{

            for(i=0; i<2; i++)
            {
                x=1;
                for(j=0; j<n; j++)
                {
                    if(i==0)
                    {
                        ara[0][j] = x;
                    }
                    else
                    {
                        ara[j][0] = x;
                    }
                    x*=2;
                }
            }

            x=x/2;
            for(i=1; i<n; i++)
            {
                x*=2;
            }

            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(i==0 || j==0)
                    {
                        if(j==0)
                        {
                            for(k=dg(ara[i][j]); k<dg(x); k++)
                            {
                                printf(" ");
                            }
                            printf("%d", ara[i][j]);
                        }
                        else
                        {
                            for(k=dg(ara[i][j]); k<dg(x); k++)
                            {
                                printf(" ");
                            }
                            printf(" %d", ara[i][j]);
                        }
                        continue;
                    }
                    else
                    {
                        ara[i][j] = ara[i][j-1]*2;
                        if(j==0)
                        {
                            for(k=dg(ara[i][j]); k<dg(x); k++)
                            {
                                printf(" ");
                            }
                            printf("%d", ara[i][j]);
                        }
                        else
                        {
                            for(k=dg(ara[i][j]); k<dg(x); k++)
                            {
                                printf(" ");
                            }
                            printf(" %d", ara[i][j]);
                        }
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}
