#include <stdio.h>

int main()
{
    int n, ara[1000], i, j;

    scanf(" %d", &n);
    for(i=0; i<1000; )
    {
        for(j=0; j<n; j++, i++)
        {
            ara[i] = j;
            if(i>999)
            {
                break;
            }
            printf("N[%d] = %d\n", i, ara[i]);
        }
    }

    return 0;
}
