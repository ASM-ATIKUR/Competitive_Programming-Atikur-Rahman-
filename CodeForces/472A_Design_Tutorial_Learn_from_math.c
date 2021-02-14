#include <stdio.h>
#include <math.h>

int check_prime(int x);

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=4; i<n; i++)
    {
        if((!check_prime(i))){
            if((!check_prime(n-i)))
            {
                printf("%d %d\n", i, n-i);
                return 0;
            }
        }
    }
}
int check_prime(int x)
{
    int i;

    if(x<2) return 0;
    else if(x==2) return 1;
    else if(!(x%2)) return 0;
    else
    {
        for(i=3; i<=sqrt(x); i+=2)
        {
            if(!(x%i)) return 0;
        }
        return 1;
    }
}
