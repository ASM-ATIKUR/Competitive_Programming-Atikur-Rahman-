#include <stdio.h>

int main()
{
    int n, k, i, pno=0;
    scanf("%d %d", &n, &k);
    k=240-k;
    for(i=1; pno+(i*5)<=k && i<=n; i++)
    {
        pno+=(i*5);
    }
    printf("%d\n", --i);

    return 0;
}
