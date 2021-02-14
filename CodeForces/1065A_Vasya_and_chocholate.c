#include <stdio.h>

int main()
{
    long long int s, a, b, c, t, ans=0;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        ans=(s/c);
        ans+=((ans/a)*b);
        printf("%lld\n", ans);
    }

    return 0;
}
