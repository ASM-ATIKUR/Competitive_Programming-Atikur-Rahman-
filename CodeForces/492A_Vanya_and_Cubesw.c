#include <stdio.h>

int main()
{
    int n, i, sum=0;
    scanf("%d", &n);
    for(i=1; sum+((i*(i+1))/2) <= n; i++ ) sum+=(i*(i+1))/2;
    printf("%d\n", --i);
    return 0;
}
