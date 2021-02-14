#include <stdio.h>

int main()
{
    int a, b, x, y, i;

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

    for(i=++a; i<b; i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
