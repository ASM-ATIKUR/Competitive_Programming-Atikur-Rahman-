#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int n, ans, l;
    gets(str);
    l=strlen(str);
    n=strtoul(str, '\0', 10);

    if(str[l-1]=='h')
    {
        if(n==31) printf("7\n");
        else if(n==30) printf("11\n");
        else printf("12\n");
    }
    else
    {
        if(n==5 || n==6) printf("53\n");
        else printf("52\n");
    }

    return 0;
}
