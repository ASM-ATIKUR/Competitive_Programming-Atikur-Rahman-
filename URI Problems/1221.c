#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int n, i;
    int t;
    scanf("%d", &t);
    while(t-->0)
    {
        scanf("%llu", &n);
        if(n<3) printf("Prime\n");

        else if(!(n%2)) printf("Not Prime\n");
        else{
            for(i=3; i<=sqrt(n); i+=2)
            {
                if(n%i==0)
                {
                    printf("Not Prime\n");
                    break;
                }
            }
            if(i>sqrt(n)) printf("Prime\n");
        }
    }
    return 0;
}
