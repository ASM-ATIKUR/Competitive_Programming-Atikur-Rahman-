#include <stdio.h>

int main()
{
    int n, d;

    scanf(" %d", &n);

    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0) printf("YES\n");
    else
    {
        do
        {
            d=n%10;
            if(d!=4 && d!=7)
            {
                printf("NO\n");
                break;
            }
            n/=10;
        }while(n>0);
    }
    if(!n) printf("YES\n");

    return 0;
}
