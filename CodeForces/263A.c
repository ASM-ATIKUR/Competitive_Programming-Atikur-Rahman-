#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, a, b;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &n);

            if(n==1)
            {
                a=i;
                b=j;
            }
        }
    }

    printf("%d\n", abs(a-2)+abs(b-2));

    return 0;
}
