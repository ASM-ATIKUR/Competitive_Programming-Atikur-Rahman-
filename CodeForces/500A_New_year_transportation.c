#include <stdio.h>

int main()
{
    int ara[30009], n, t, i, x=1, check=0;
    scanf("%d %d", &n, &t);
    for(i=1; i<n; i++)
    {
        scanf("%d", &ara[i]);
        if(i==x) x=(x+ara[i]);
        if(x==t) check=1;
    }
    if(check) printf("YES\n");
    else printf("NO\n");

    return 0;
}
