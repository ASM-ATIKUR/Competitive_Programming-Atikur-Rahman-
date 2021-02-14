#include <stdio.h>

int main()
{
    int n, i, max=0, count=0;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
        if(ara[i]>max) max=ara[i];
    }
    for(i=0; i<n; i++)
    {
        count+=(max-ara[i]);
    }
    printf("%d\n", count);

    return 0;
}
