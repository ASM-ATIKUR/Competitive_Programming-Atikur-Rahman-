#include <stdio.h>
#include <string.h>

int main()
{
    char ara[100];

    scanf(" %s", ara);

    int l = strlen(ara), i;

    for(i=0; i<l; i++)
    {
        if(ara[i]=='H' || ara[i]=='Q' || ara[i]=='9')
        {
            printf("YES\n");
            break;
        }

    }
    if(i==l) printf("NO\n");

    return 0;
}
