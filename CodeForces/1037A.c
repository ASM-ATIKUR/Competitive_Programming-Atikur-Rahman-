#include <stdio.h>

int main()
{
    int n, count= 0, sum=0, i;
    scanf(" %d", &n);

    for(i=1; sum<n; i*=2)
    {
        sum+=i;
        count++;
    }
    printf("%d\n", count);

    return 0;
}
