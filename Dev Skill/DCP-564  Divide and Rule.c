#include <stdio.h>

int main()
{
    int t, n, i, j;
    scanf(" %d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);

        if(n==1) printf("%d\n", 3);

        else
        {
            printf("1");
            for(j=0; j<n-2; j++)
            {
                printf("0");
            }
            printf("2\n");
        }
    }

    return 0;
}
