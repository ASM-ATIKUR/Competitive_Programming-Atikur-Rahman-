#include <stdio.h>

int main()
{
    int n=5, c, sum=0;
    while(n--)
    {
        scanf("%d", &c);
        sum+=c;
    }
    if(sum%5==0 && sum) printf("%d\n", sum/5);
    else printf("-1\n");

    return 0;
}
