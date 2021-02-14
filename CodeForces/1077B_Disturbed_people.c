#include <stdio.h>

int main()
{
    int n, i, cnt=0;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]==1 && ara[i+1]==0 && ara[i+2]==1)
        {
            cnt++;
            i+=2;
        }
    }
    printf("%d\n", cnt);

    return 0;
}
