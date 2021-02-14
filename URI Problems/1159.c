#include <stdio.h>

int main()
{
    int n, i, sum=0;

    while(1)
    {
        scanf(" %d", &n);

        if(n==0)
        {
            break;
        }
        else if(n%2!=0)
        {
            n=n+1;
        }

        for(i=0; i<5; i++, n+=2)
        {
            sum+=n;
        }
        printf("%d\n", sum);
        sum =0;
    }

    return 0;

}

