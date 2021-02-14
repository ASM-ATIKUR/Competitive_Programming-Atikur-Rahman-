#include <stdio.h>

int main(void)
{
    int n, a, a1, max1, max2, min1, min2, i;

    scanf("%d", &n);
    scanf("%d %d", &a, &a1);
    if(a1>a)
    {
        max1=min2=a1;
        max2=min1=a;
    }
    else
    {
        max1=min2=a;
        max2=min1=a1;
    }


    for(i=2; i<n; i++)
    {
        scanf("%d", &a);
        if(a>max1)
        {
            max2=max1;
            max1=a;
        }
        else if(a>max2)
            max2=a;
        if(a<min1)
        {
            min2=min1;
            min1=a;
        }
        else if(a<min2)
        {
            min2=a;
        }
    }
    if(max2-min1<max1-min2)
    {
        printf("%d\n", max2-min1);

    }
    else printf("%d\n", max1-min2);

    return 0;
}
