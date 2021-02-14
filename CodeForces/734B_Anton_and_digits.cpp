#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int k2, k3, k5, k6, k256, k32;
    scanf("%lld %lld %lld %lld", &k2, &k3, &k5, &k6);

    k256=min(k2, min(k5, k6));
    k2=k2-k256;
    k32=min(k2, k3);
    printf("%lld\n", (k32*32)+(k256*256));

    return 0;
}
