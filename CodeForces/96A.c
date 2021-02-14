#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int countone =0, countzero = 0, i;

    scanf(" %s", a);

    for(i=0; i<strlen(a); i++)
    {
        if(a[i] == '0')
        {
            countzero++;
            countone = 0;

            if(countzero>=7)
            {
                printf("YES\n");
                break;
            }
        }
        else if(a[i]=='1')
        {
            countzero = 0;
            countone++;
            if(countone>=7)
            {
                printf("YES\n");
                break;
            }
        }
    }

    if(countone<7 && countzero<7)
    {
        printf("NO\n");

    }

    return 0;
}
