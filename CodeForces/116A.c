#include <stdio.h>

int main()
{
    int n, a, b, x=0, max = 0, i;
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d %d", &a, &b);

        x= (x-a)+b;

        if(x>max)
        {
            max = x;
        }
    }

    printf("%d\n", max);

    return 0;
}
