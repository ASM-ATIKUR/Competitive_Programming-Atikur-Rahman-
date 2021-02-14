#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int i;

    scanf(" %s %s", a, b);

    for (i=0; i< strlen(a); i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i] = (a[i]-'a')+'A';
        }

        if(b[i]>='a' && b[i]<='z')
        {
            b[i] = (b[i]-'a')+'A';
        }
    }
    printf("%d\n", strcmp(a, b));

    return 0;
}
