#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, arr[3][3], i, j, x, y;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr[i][j]=1;
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a);
            if(a%2)
            {
                x= min(i+1, 2);
                y= min(j+1, 2);
                arr[i][j]= !arr[i][j];
                for(int k=max(0, i-1); k<=x; k++)
                {
                    arr[k][j]= !(arr[k][j]);
                }
                for(int l=max(0, j-1); l<=y; l++)
                {
                    arr[i][l]= !(arr[i][l]);
                }
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
