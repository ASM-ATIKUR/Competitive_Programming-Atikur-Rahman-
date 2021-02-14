#include <stdio.h>

int main()
{
    int a, b, ara[1000], ara1[1000];

    while(1)
    {
        scanf(" %d %d", &a, &b);
        if(a==b)
        {
            break;
        }
        else if(a>b)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
    }

    return 0;


}
