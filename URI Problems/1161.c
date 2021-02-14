#include <stdio.h>

int main()
{
    long long int a, b;
    int i;

    while(scanf(" %lld %lld", &a, &b)!=EOF)
    {

        if(a==0)
        {
            a=1;
        }
        else{
            for(i=a-1; i>0; i--)
            {
                a*=i;
            }
        }

        if(b==0)
        {
            b=1;
        }
        else{
            for(i=b-1; i>0; i--)
            {
                b*=i;
            }
        }

        printf("%lld\n", a+b);

    }

    return 0;
}
