#include<stdio.h>

int main()
{
    long long int ara[61], f =0, s=1, n;
    ara[0] = f;
    ara[1] = s;
    int i, j, x;
    scanf(" %d", &x);

    for(i=2; i<=60; i++)
    {
        n=f+s;
        ara[i] = n;
        f=s;
        s=n;
    }

    for(i=0; i<x; i++)
    {
        scanf(" %d", &j);
        printf("Fib(%d) = %lld\n", j, ara[j]);
    }

    return 0;
}
