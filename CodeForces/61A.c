#include <stdio.h>
#include <string.h>

int main()
{
    char a[105], b[105], ans[105];
    scanf(" %s %s", a, b);
    int l=strlen(a), i;

    for(i=0; i<l; i++)
    {
        if(a[i]==b[i]) ans[i]='0';
        else ans[i]='1';
    }
    ans[l]='\0';
    printf("%s\n", ans);
    return 0;
}
