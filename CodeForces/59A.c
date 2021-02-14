#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], upr[101];
    scanf("%s", str);
    int l = strlen(str);
    int i, j, s=0, u=0;
    for(i=0; i<l; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            s++;
            upr[i]=str[i]-'a'+'A';
        }
        else
        {
            u++;
            upr[i]=str[i];
            str[i]=str[i]-'A'+'a';

        }
    }
    str[l]='\0';
    upr[l]='\0';
    if(s>=((l+1)/2)) printf("%s\n", str);
    else printf("%s\n", upr);

    return 0;
}
