#include <stdio.h>

int main()
{
    int n, flag=0, x;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x) flag=1;
    }
    if(flag) printf("HARD\n");
    else printf("EASY\n");

    return 0;
}
