#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100], x[30]={0}, y[30]={0};
    int n, al, bl, cl, i, j=0;
    scanf(" %s %s %s", a, b, c);
    al=strlen(a);
    bl=strlen(b);
    cl=strlen(c);
    for(i=0; i<al; i++)
    {
        x[a[i]-'A']++;
    }
    for(i=0; i<bl; i++)
    {
        x[b[i]-'A']++;
    }
    for(i=0; i<cl; i++)
    {
        y[c[i]-'A']++;
    }
    for(i=0; i<26; i++)
    {
        if(x[i]!=y[i]) j=1;
    }
    if(j==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
