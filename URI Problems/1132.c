#include <stdio.h>

int main()
{
    int a, b, x, y, i, sum=0;

    scanf(" %d %d", &x, &y);
    if(x<y)
    {
        a=x;
        b=y;
    }
    else
    {
        a=y;
        b=x;
    }

    for(i=a; i<=b; i++)
    {
        if(i%13!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
