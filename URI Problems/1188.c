#include <stdio.h>

int main()
{
    int i, j, count=0, x=11, y=5;
    char ch;
    double m[12][12], sum=0;

    scanf(" %c", &ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf(" %lf", &m[i][j]);

            if(j>x&& j>y)
            {
                sum+=m[i][j];
                count++;
            }
        }
        if(x>6)
        {
            x--;
        }
        else{
            y++;
        }
    }
    if(ch=='S')
    {
        printf("%.1lf\n", sum);
    }
    else if(ch=='M')
    {
        printf("%.1lf\n", sum/count);
    }


    return 0;
}


