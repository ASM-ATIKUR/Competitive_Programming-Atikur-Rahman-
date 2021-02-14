#include <stdio.h>

int main()
{
    int n, m, c, mc=0, cc=0;
    scanf("%d\n", &n);
    while(n--)
    {
        scanf("%d %d", &m, &c);
        if(m>c) mc++;
        else if(m<c) cc++;
    }
    if(mc>cc) printf("Mishka\n");
    else if(mc<cc) printf("Chris\n");
    else printf("Friendship is magic!^^\n");

    return 0;
}
