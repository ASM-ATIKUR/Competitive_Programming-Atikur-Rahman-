#include <stdio.h>

int main()
{
    int n, k, y, count=0;
    scanf("%d %d", &n, &k);
    k=5-k;
    while(n--)
    {
        scanf("%d", &y);
        if(y<=k) count++;
    }
    printf("%d\n", count/3);

    return 0;

}
