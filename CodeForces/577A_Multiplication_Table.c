#include <stdio.h>

int main()
{
    int n, x, i, cnt=0;
    scanf("%d %d", &n, &x);

    for(i=1; i<=n; i++)
    {
        if(!(x%i))
        {
            if(x/i<=n) cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}
