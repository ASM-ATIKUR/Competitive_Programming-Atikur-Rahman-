#include <stdio.h>

int main()
{
    int n, h, x, count=0;
    scanf("%d %d", &n, &h);
    while(n--)
    {
        scanf("%d", &x);
        if(x>h) count+=2;
        else count++;
    }
    printf("%d\n", count);

    return 0;
}
