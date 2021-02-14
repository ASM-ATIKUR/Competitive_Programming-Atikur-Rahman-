#include <stdio.h>

int main()
{
    int n, x, y, gcount=1;
    scanf(" %d", &n);
    scanf(" %d", &x);
    while(--n>0)
    {
        scanf(" %d", &y);
        if(x!=y)
        {
            x=y;
            gcount++;
        }
    }
    printf("%d\n", gcount);
    return 0;
}
