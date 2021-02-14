#include <stdio.h>

int main()
{
    int n,a, p,ans=0, minp=0;
    scanf("%d", &n);
    scanf("%d %d", &a, &p);
    minp=p;
    ans=a*minp;
    for(int i=1; i<n; i++)
    {
        scanf("%d %d", &a, &p);
        if(minp>p) minp=p;
        ans+=a*minp;
    }

    printf("%d\n", ans);

    return 0;
}
