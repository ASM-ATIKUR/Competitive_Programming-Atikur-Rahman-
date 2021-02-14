#include <stdio.h>

int main()
{
    int ara[105], i, hii[105], n ;

    scanf(" %d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
        hii[ara[i]] = i;
    }
    for(i=1; i<=n; i++)
    {
        printf("%d " , hii[i]);
    }
    return 0;
}
