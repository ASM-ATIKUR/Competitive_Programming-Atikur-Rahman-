#include <stdio.h>

int phi(int n);
int main()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n==0) break;
        printf("%d\n", phi(n));
    }
    return 0;
}

int phi(int n)
{
    int ret=n;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            ret-=ret/i;
        }
    }
    if(n>1) ret-=ret/n;

    return ret;
}

