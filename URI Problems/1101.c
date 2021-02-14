#include <stdio.h>

int main()
{
    int a, b, x, y, i=0, j, k, ara[1000], ara1[1000], sum =0;

    while(1)
    {
        scanf(" %d %d", &a, &b);
        if(a<=0||b<=0)
        {
            break;
        }
        else if(a>b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }
        ara[i]=x;
        ara1[i]=y;
        i++;


    }
    for(k=0; k<i; k++){
    for(j=ara[k]; j<=ara1[k]; j++)
    {
        printf("%d ", j);
        sum +=j;
    }
        printf("Sum=%d\n", sum);
        sum =0;
    }

    return 0;


}
