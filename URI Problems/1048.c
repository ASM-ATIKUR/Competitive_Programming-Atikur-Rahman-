#include <stdio.h>

int main()
{
    float n;
    float newn, in;

    scanf("%f", &n);

    if(n>=0&&n<=400.00)
    {
        in = (n*15)/100;
        newn = n+in;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", newn, in);
    }
    else if(n>=400.01&&n<=800.00)
    {
        in = (n*12)/100;
        newn = n+in;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", newn, in);
    }
    else if(n>=800.01&&n<=1200.00)
    {
        in = (n*10)/100;
        newn = n+in;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", newn, in);
    }
    else if(n>=1200.01&&n<=2000.00)
    {
        in = (n*7)/100;
        newn = n+in;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", newn, in);
    }
    else if(n>2000.00)
    {
        in = (n*4)/100;
        newn = n+in;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", newn, in);
    }

    return 0;
}
