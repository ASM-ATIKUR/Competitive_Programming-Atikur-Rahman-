#include <stdio.h>
#include <string.h>

int main()
{
    char ara[100], new[200];

    scanf(" %s", ara);
    int l = strlen(ara), i, j;

    for(i=0, j=0; i<l;i++)
    {
        if(ara[i]>='A' && ara[i]<= 'Z')
        {
            ara[i] = (ara[i]-'A')+'a';
        }

        if(ara[i]!='a' && ara[i]!= 'o' && ara[i]!='e' && ara[i]!= 'y' && ara[i]!='u' && ara[i]!= 'i')
        {
            new[j]='.';
            new[j+1]=ara[i];
            j+=2;
        }
    }
    new[j]='\0';

    printf("%s\n", new);

    return 0;
}
