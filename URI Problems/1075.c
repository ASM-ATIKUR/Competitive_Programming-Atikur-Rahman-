#include <stdio.h>


int main()
{
    int i, n;
    scanf(" %d", &n);

    for(i=0; i<10000; i++)
    {
        if(i%n==0)
        {
            printf("%d\n", i+2);
        }

    }
    return 0;
}
