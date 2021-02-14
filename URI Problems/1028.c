#include <stdio.h>

int main()
{
    int n, a, b, z, i, j, gcd, d;

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        d=1;
        scanf(" %d %d", &a, &b);
        if(a<b)
        {
            z=a;
            a=b;
            b=z;
        }
        while(a%b!=0)
        {
            z=a%b;
            a=b;
            b=z;


        }
        printf("%d\n", b);

    }

    return 0;
}
