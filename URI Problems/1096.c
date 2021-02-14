#include <stdio.h>

int main()
{
    int i, j, k=7;

    for(i=1; i<10; i+=2)
    {
        for(j=k; j>k-3; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
        k=j+5;

    }
    return 0;

}
