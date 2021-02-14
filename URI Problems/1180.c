#include <stdio.h>

int main()
{
    int n, min = 100000, count = 0, i;
    scanf(" %d", &n);

    int X[n];
    for(i=0; i<n; i++)
    {
        scanf(" %d", &X[i]);

        if(X[i]<min)
        {
            min = X[i];
            count = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", count);

    return 0;
}
