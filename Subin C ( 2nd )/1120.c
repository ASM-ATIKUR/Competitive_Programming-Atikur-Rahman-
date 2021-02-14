#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, str_s=0;
    char ara[100];
    char new[100];

    while(1)
    {
        scanf(" %d %s", &n, ara);

        if(n==0)
        {
            if(ara[0]=='0')
                break;
        }

        for(i=0, j=0; i<strlen(ara); i++)
        {
            if(ara[i] == '0' && str_s==0)
            {
                continue;
            }
            else if((int)ara[i]== n)
            {
                continue;
            }
            else
            {
                new[j] = ara[i];
                str_s = 1;
                j++;
            }
        }
        printf("%s\n", new);
    }

    return 0;
}
