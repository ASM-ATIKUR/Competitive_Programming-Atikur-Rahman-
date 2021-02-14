#include <stdio.h>

int main()
{
    int n, x, i, j;

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d", &x);
        for(j=2; j<=x; j++)
        {
            if(x%j==0)
            {
                break;
            }
        }
        if(j==x)
        {
            printf("%d eh primo\n", x);
        }
        else{
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}
