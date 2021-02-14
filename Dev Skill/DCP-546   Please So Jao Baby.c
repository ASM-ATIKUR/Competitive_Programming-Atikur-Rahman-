#include <stdio.h>

int main()
{
    int ara, t, k, sum = 0, time = 0, i, j;

    scanf(" %d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &k);

        for(j=0; j<20000; j++)
        {
            scanf(" %d", &ara);

            if(sum<k)
            {
                sum+=ara;
                time++;
            }
        }
        printf("%d\n", time-2);
    }

    return 0;
}
