#include <stdio.h>

int main()
{
    int ara[]= {3,1,2,5,4};
    int i, j, k, l, minimum;

    for(i=0; i<5; i++)
    {
        minimum = 100000;
        for(j=i; j<5; j++)
        {
            if(ara[j]<minimum)
            {
                minimum = ara[j];
                l=j;
            }
        }
        k= ara[i];
        ara[i] = minimum;
        ara[l]= k;
    }
    for(i=0; i<5; i++)
    {
        printf("%d, ", ara[i]);
    }
    return 0;
}
