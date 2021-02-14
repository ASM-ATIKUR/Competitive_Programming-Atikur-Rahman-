#include <stdio.h>

int main()
{
    int n, m, i, x, xbe=1, pos=1;
    long long int count=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<m; i++)
    {
        scanf(" %d", &x);

        if(x<xbe)
        {
            count+=(n-xbe);
            pos=0;
        }
        count+=(x-pos);
        xbe=x;
        pos=x;
    }
    printf("%lld\n", count);

    return 0;
}
