#include <stdio.h>

int main()
{
    int n, i, j=0;

    scanf(" %d", &n);

    for(i=0, j=1; i<n; i++)
    {
        printf("%d %d %d PUM\n", j, j+1, j+2);
        j=j+4;
    }
    return 0;
}
