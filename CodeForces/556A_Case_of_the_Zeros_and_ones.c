#include <stdio.h>

char str[200005];
int main()
{
    int n, i, czero=0;
    scanf("%d", &n);
    scanf("%s", str);
    for(i=0; i<n; i++)
    {
        if(str[i]=='0') czero++;
    }
    if(czero>n-czero) czero=n-czero;

    printf("%d\n", n-(2*czero));

    return 0;

}
