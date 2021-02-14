#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, x, land;


    while(1)
    {
        scanf(" %d", &n);
        if(n==0)
        {
            break;
        }
        else
        {
            scanf(" %d %d", &a, &b);
            x = (n*a*100)/b;
            land = pow(x, 0.5);
            printf("%d\n", land);
        }
    }

    return 0;
}
