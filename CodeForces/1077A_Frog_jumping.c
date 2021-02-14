#include <stdio.h>

int main()
{
    long long int t, a, b, k;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld %lld", &a, &b, &k);
        if(k%2)
        {
            a=a*((k/2)+1);
        }
        else a=a*(k/2);

        printf("%lld\n", a-(b*(k/2)));
    }
    return 0;
}
