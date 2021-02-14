#include <stdio.h>
#include <string.h>

int main()
{
    char ara[52];
    int s, i;

    while(gets(ara) != NULL)
    {
        int l= strlen(ara);
        s=0;
        for(i=0; i<l; i++)
        {
            if(s==0)
            {
                if(ara[i]>='a' && ara[i]<='z')
                {
                    ara[i] = ara[i]-'a'+'A';
                    s=1;
                }
                else if(ara[i]>='A' && ara[i]<='Z') s=1;
            }
            else
            {
                if(ara[i]>='A' && ara[i]<='Z')
                {
                    ara[i] = ara[i]+'a'-'A';
                    s=0;
                }
                else if(ara[i]>='a' && ara[i]<='z') s=0;
            }
        }
        puts(ara);

    }
    return 0;
}
