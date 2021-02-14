#include <stdio.h>

int main()
{
    int ara[100];
    int i, j, count=0, n;
    scanf("%d", &n);
    n=n*2;
    for(i=0; i<n;i+=2)
    {
        scanf(" %d %d", &ara[i], &ara[i+1]);
    }
    for(i=0; i<n; i+=2)
    {
        for(j=i+2; j<n; j+=2)
        {
            if(ara[i]==ara[j+1]) count++;
            if(ara[i+1]==ara[j]) count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
