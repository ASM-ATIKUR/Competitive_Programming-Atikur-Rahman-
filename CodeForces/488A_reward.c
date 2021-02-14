#include <stdio.h>
#include <math.h>

int main()
{
    int i, a=0, b=0, n, x;
    for(i=0; i<3; i++)
    {
        scanf("%d", &x);
        a+=x;
    }
    for(i=0; i<3; i++)
    {
        scanf("%d", &x);
        b+=x;
    }
    scanf("%d", &n);

    a=ceil(a/5.0);
    b=ceil(b/10.0);

    if(a+b<=n) printf("YES\n");
    else printf("NO\n");

    return 0;
}
