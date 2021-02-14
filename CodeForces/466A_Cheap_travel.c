#include <stdio.h>

int main()
{
    int n, m, a, b, sum;
    scanf(" %d %d %d %d", &n, &m, &a, &b);
    sum=((n/m)*b);
    if(((n%m)*a)< b) sum+=(n%m)*a;
    else sum+=b;
    if(sum>(n*a)) sum=n*a;

    printf("%d\n", sum);
    return 0;
}
