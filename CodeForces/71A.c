#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, l;
    scanf(" %d", &n);

    char ara[n][100];
    int count[n];

    for(i=0; i<n; i++)
    {
        scanf(" %s", ara[i]);
        l = strlen(ara[i]);

        if(l>10)
        {
            count[i] = l-2;
            printf("%c%d%c\n", ara[i][0], count[i], ara[i][l-1]);
        }
        else
        {
            printf("%s\n", ara[i]);
        }
    }

    return 0;
}
