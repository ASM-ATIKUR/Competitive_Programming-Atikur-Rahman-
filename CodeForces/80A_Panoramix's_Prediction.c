#include <stdio.h>

int main(void)
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    for(i=n+1; i<=m; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
            break;
    }
    if(i==m) printf("YES\n");
    else printf("NO\n");

    return 0;
}
