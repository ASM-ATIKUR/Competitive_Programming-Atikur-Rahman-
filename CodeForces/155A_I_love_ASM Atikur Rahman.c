#include <stdio.h>

int main()
{
    int n, max, min, count=0, x;
    scanf("%d %d", &n, &x);
    max=x;
    min=x;
    while(--n)
    {
        scanf("%d", &x);
        if(x>max)
        {
            count++;
            max=x;
        }
        if(x<min)
        {
            count++;
            min=x;
        }
    }
    printf("%d\n", count);
    return 0;
}
