#include <stdio.h>

int main()
{
    int a , n, i, j, sum=0;

    scanf(" %d %d", &a, &n);

    while(1)
    {
        if(n<1)
        {
            scanf(" %d", &n);
        }
        else
        {
            break;
        }
    }
    for(i=0, j=a; i<n; i++, j++)
    {
        sum+=j;
    }
    printf("%d\n", sum);

    return 0;
}
