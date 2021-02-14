#include <stdio.h>

int main(void)
{
    long long int n, k, b, g, r;
    scanf("%lld %lld", &n, &k);
    r=n*2;
    g=n*5;
    b=n*8;
    if(r%k) r=(r/k)+1;
    else r=r/k;

    if(g%k) g=(g/k)+1;
    else g=g/k;

    if(b%k) b=(b/k)+1;
    else b=b/k;

    printf("%lld\n", g+b+r);

    return 0;

}
