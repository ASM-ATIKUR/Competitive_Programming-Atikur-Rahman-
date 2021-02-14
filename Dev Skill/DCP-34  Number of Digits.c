#include <stdio.h>
#include <string.h>

int main()
{
    int t, n, i;

    char input[1000];

    scanf(" %d", &t);

    for(i=0; i<t; i++)
    {
        scanf(" %s", input);

        printf("%d\n", strlen(input));
    }

    return 0;

}
