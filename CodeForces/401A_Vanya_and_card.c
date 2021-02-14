#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, sum=0, m;
    scanf("%d %d", &n, &x);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &m);
        sum+=m;
    }
    sum=abs(sum);

    if(sum%x)
    {
        sum=(sum/x)+1;
    }
    else sum=sum/x;

    printf("%d\n", sum);

    return 0;

}
