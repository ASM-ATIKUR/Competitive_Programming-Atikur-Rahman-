#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, i, x, sq;
    scanf("%lld", &n);
    while(n--)
    {
        scanf("%lld", &x);
        sq=sqrt(x);
        if(x==1) printf("NO\n");
        else if(sq*sq==x)
        {
            if(sq>2 && x%2==0) printf("NO\n");
            else
            {
                sq=sqrt(sq);
                for(i=3; i<=sq; i+=2)
                {
                    if(x%i==0)
                    {
                        printf("NO\n");
                        break;
                    }
                }
                if(i>sq) printf("YES\n");
            }
        }
        else printf("NO\n");

    }
    return 0;
}
