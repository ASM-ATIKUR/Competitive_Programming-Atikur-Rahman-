#include <stdio.h>

int main()
{
    int count=0, digit;
    long long int n;
    scanf("%lld", &n);

    while(n>0)
    {
        digit=n%10;
        if(digit==4 || digit==7) count++;
        n/=10;
    }
    if(count==7 || count==4) printf("YES\n");
    else printf("NO\n");

    return 0;
}
