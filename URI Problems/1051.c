#include <stdio.h>

int main()
{
    float n, tax =0.00;
    scanf(" %f", &n );


    if(n<=2000.00)
    {
        printf("Isento\n");
    }
    if(n>4500.00)
    {
        tax = ((n-4500.00)*28)/100;
        n = 4500.00;
    }
    if(n>3000.00)
    {
        tax +=((n-3000.00)*18)/100;
        n=3000.00;
    }
    if(n>2000.00)
    {
        tax += ((n-2000.00)*8)/100;
        printf("R$ %.2f\n", tax);
    }

    return 0;

}
