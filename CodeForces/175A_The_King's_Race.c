#include <stdio.h>

int main()
{
    long long int n, a, b;
    scanf("%lld", &n);
    scanf("%lld %lld", &a, &b);

    if(b<=(n-a+1)) printf("White\n");
    else printf("Black\n");

    return 0;
}
