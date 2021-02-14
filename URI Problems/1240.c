#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int a, b;
    int n, x, count;
    scanf("%d", &n);
    while(n-->0){
        scanf(" %llu %llu", &a, &b);
        x=b;
        count=0;
        while(x>0)
        {
            count++;
            x=x/10;
        }

        if(a%(int)(pow(10, count))==b) printf("encaixa\n");
        else printf("nao encaixa\n");
    }

    return 0;
}
