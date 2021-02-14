#include <stdio.h>

int main()
{
    int n, a, b, c, i, sum_a=0, sum_b=0, sum_c=0;
    scanf(" %d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        sum_a+=a;
        sum_b+=b;
        sum_c+=c;
    }
    if(sum_a||sum_b||sum_c) printf("NO\n");
    else printf("YES\n");

    return 0;
}
