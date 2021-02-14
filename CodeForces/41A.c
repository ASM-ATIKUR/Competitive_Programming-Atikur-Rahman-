#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], t[101], temp;

    scanf(" %s %s", s, t);
    int l=strlen(s), i, j;

    for(i=0, j=l-1; i<=j; i++, j--)
    {
        temp = s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    s[l]='\0';
    if(strcmp(s, t)==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
