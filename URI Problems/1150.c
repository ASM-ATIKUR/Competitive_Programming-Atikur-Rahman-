#include <stdio.h>

int main()
{
    int a , n, i, j, sum=0, count=0;

    scanf(" %d %d", &a, &n);

    while(1)
    {
        if(n<=a)
        {
            scanf(" %d", &n);
        }
        else
        {
            break;
        }
    }
    while(sum<=n)
    {
        sum+=a++;
        count++;

    }
    printf("%d\n", count);

    return 0;
}

