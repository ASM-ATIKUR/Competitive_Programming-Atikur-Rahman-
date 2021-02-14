#include<stdio.h>

int main()
{
    int ara[]={3,1,5,2,4};
    int ara1[5];

    int i, minimum, j, k;

    for(i=0; i<5; i++)
    {
        minimum =100000;
        for(j=0; j<5; j++)
        {
            if(ara[j]<minimum)
            {
                minimum = ara[j];
                k=j;


            }
        }
        ara[k]=100000;
        ara1[i]=minimum;


    }
    for(i=0; i<5; i++)
    {
        printf("%d, ", ara1[i]);
    }
    return 0;

}
