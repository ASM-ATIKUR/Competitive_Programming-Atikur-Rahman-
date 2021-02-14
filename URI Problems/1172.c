#include <stdio.h>

int main()
{
    int X[10], x, i;

    for(i=0; i<10; i++)
    {
        scanf(" %d", &x);
        if(x<1)
        {
            X[i]=1;
        }
        else
        {
            X[i]=x;
        }
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;

}
