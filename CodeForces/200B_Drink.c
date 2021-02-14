#include <stdio.h>

int main()
{
    int n, i, sum=0, a;
    scanf(" %d", &n);
    for(i=0; i<n; i++)
    {
        scanf(" %d", &a);
        sum+=a;
    }
    printf("%f\n", (float)sum/n);
    return 0;
}
