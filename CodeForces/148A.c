#include <stdio.h>

int main()
{
    int a, b, c, d, n, cnt, i;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &n);
    cnt=n;
    for(i=1; i<=n; i++)
    {
        if(i%a && i%b && i%c && i%d) cnt--;
    }
    printf("%d\n", cnt);

    return 0;
}
