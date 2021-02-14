#include <stdio.h>

int main()
{
    int n, i, j, k;
    int ara[101][101];



    while(1)
    {
        scanf(" %d", &n);
        int x=-1, y=n , p=1;
        if(n==0)
        {
            break;
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j>x && j<y)
                {
                    ara[i][j]=p;
                }
                else
                {
                    ara[i][j]=ara[i-1][j];
                }

                if(j==n-1)
                {
                    printf("%3d\n", ara[i][j]);
                }
                else
                {
                    printf("%3d ", ara[i][j]);
                }
            }

            if(n%2==0 && i==(n-1)/2)
            {
                x++;
                y--;
                p++;
            }
            if(i<(n-1)/2)
            {
                x++;
                y--;
                p++;
            }
            else
            {
                x--;
                y++;
                p--;
            }

        }
        printf("\n");


    }

    return 0;
}
