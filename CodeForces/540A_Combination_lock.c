#include <stdio.h>
#include <string.h>

int max(int a, int b);
int main()
{
    int n, i, x, y, mx, mn, ans=0;
    scanf("%d", &n);
    char a[n+10], b[n+10];
    scanf("%s", a);
    scanf("%s", b);
    for(i=0; i<n; i++)
    {
        mx=max((a[i]-'0'), (b[i]-'0'));
        mn=(a[i]-'0')+(b[i]-'0')-mx;

        x=mx-mn;
        y=10-mx+mn;
        printf("%d %d\n", x, y);
        if(x<y) ans+=x;
        else ans+=y;

    }
    printf("%d\n", ans);

    return 0;
}

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}
