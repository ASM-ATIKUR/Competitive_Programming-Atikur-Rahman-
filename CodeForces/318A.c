#include <stdio.h>


int main()
{
    long long int a, b, i;
    scanf("%lld %lld", &a, &b);
    if(b<=(a+1)/2)
    {
        printf("%lld\n", (b*2)-1);
    }
    else
    {
        b-=(a+1)/2;
        printf("%lld\n", b*2);

    }

    return 0;
}
