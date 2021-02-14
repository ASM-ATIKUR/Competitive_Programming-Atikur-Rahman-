#include <stdio.h>

int main()
{
    int n, i, j, temp, min= 200, num, his_sum=0, my_sum=0, count=0;
    scanf(" %d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf(" %d", &ara[i]);
    }

    for(i=0; i<n; i++)
    {
        min= -1;
        for(j=i; j<n; j++)
        {
            if(ara[j]>min)
            {
                min=ara[j];
                num = j;
            }
        }
        temp = ara[i];
        ara[i] = ara[num];
        ara[num] = temp;
    }

    j=n-1;

    for(i=0; j>=i; i++)
    {
        my_sum+=ara[i];
        for (; my_sum>(his_sum+ara[j]); j--)
        {
            his_sum+=ara[j];
        }
        count++;
    }
    printf("%d\n", count);

    return 0;

}
