#include <stdio.h>
#include <string.h>

int main()
{
    char hate[]="I hate that ", love[]="I love that ";
    int n, i;
    scanf(" %d", &n);
    for(i=1; i<=n-1; i++)
    {
        if(i%2) printf("%s", hate);
        else printf("%s", love);
    }
    if(n%2) printf("I hate it\n");
    else printf("I love it\n");

    return 0;
}
