#include <stdio.h>

int main()
{
    int n;
    scanf(" %d", &n);
    if(n<=5) printf("1\n");
    else if(n%5) printf("%d\n", (n/5)+1);
    else printf("%d\n", n/5);

    return 0;
}
