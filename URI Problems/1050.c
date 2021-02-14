#include <stdio.h>
#include <string.h>

int main()
{
    int ddd[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    char des[8][25] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    int i, n;
    scanf(" %d", &n);

    for(i=0; i<8; i++)
    {
        if(n==ddd[i])
        {
            printf("%s\n", des[i]);
            break;
        }
    }
    if(i==8)
    {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}
