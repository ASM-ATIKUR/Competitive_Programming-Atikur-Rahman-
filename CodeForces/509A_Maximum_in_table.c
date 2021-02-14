#include <stdio.h>

int main()
{
    int ara[10][10], n;
    for(int i=0; i<10; i++)
    {
        ara[0][i]=1;
        ara[i][0]=1;
    }
    for(int i=1; i<10; i++)
    {
        for(int j=1; j<10; j++)
        {
            ara[i][j]=ara[i-1][j]+ara[i][j-1];
        }
    }
    scanf("%d", &n);
    printf("%d\n", ara[n-1][n-1]);

    return 0;
}
