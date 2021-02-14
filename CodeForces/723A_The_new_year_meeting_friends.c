#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ara[3], i, j, k, temp, x;
    for(i=0; i<3; i++)
    {
        scanf(" %d", &ara[i]);
    }
    for(i=0; i<3; i++)
    {
        x=ara[i];
        k=i;
        for(j=i; j<3; j++)
        {
            if(ara[j]<x)
            {
                x=ara[j];
                k=j;
            }
        }
        temp = ara[i];
        ara[i]=x;
        ara[k]=temp;
    }
    temp = ara[2]-ara[0];


    printf("%d\n", temp);

    return 0;
}
