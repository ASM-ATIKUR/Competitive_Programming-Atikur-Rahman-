#include <stdio.h>

int main()
{
    int n, p =2002;

    while(1==scanf(" %d", &n))
    {
        if(n==p)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
