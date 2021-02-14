#include <stdio.h>

int main()
{
    int n, i, j, count=0;
    char ch;
    float m[12][12], sum=0;

    scanf(" %d %c", &n, &ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf(" %f", &m[i][j]);

            if(i==n)
            {
                sum+=m[i][j];
                count++;
            }
        }
    }
    if(ch=='S')
    {
        printf("%.1f\n", sum);
    }
    else if(ch=='M')
    {
        printf("%.1f\n", sum/count);
    }


    return 0;
}
