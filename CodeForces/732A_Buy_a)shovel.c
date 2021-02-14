#include <stdio.h>

int main()
{
    int k , r, i, count=1;
    scanf("%d %d", &k, &r);
    for(i=1; (k*i)%10!=r && (k*i)%10!=0; i++)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
