#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    scanf(" %d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d^2 = %d\n", i, (int)pow(i,2));
        }
    }

    return 0;
}
