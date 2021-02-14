#include <stdio.h>

int main()
{
    int n;
    scanf(" %d", &n);
    int ara[101]={0};
    int p, q, x, count=0;
    scanf("%d", &p);
    while(p-->0)
    {
        scanf("%d", &x);
        if(ara[x]==0)
        {
            ara[x]=1;
            count++;
        }
    }
    scanf("%d", &q);
    while(q-->0)
    {
        scanf("%d", &x);
        if(ara[x]==0)
        {
            ara[x]=1;
            count++;
        }
    }

    if(count==n) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");

    return 0;
}
