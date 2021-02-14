#include <stdio.h>

int gcd(int a, int b);
int main()
{
    int a, b, n, i;
    scanf("%d %d %d", &a, &b, &n);

    for(i=0; n>=0; i++)
    {
        if(i%2)
        {
            n-=gcd(n, b);
        }
        else n-=gcd(n, a);
    }
    i-=2;
    if(i%2) printf("1\n");
    else printf("0\n");

    return 0;
}

int gcd(int a, int b)
{
    int gcd, i;
    if(a==0) return b;
    else if(b==0) return a;
    if(a<b) gcd=a;
    else{
        gcd=b;
        b=a;
    }
    while(1)
    {
        if(!(b%gcd)) return gcd;
        else
        {
            i=b;
            b=gcd;
            gcd=i%gcd;
        }
    }
}
