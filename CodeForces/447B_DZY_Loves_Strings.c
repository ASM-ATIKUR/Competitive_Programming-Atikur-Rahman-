#include <stdio.h>
#include <string.h>

int main(void)
{
    int ara[30], k, i, max=0, l, ans=0;
    char str[1111];

    scanf("%s", str);
    scanf("%d", &k);
    for(i=1; i<27; i++)
    {
        scanf("%d", &ara[i]);

        if(ara[i]>max) max=ara[i];
    }
    l=strlen(str);

    for(i=1; i<=l; i++)
    {
        ans+=(i*ara[str[i-1]-'a'+1]);
    }
    for(; i<=(l+k); i++)
    {
        ans+=(max*i);
    }
    printf("%d\n", ans);

    return 0;
}
