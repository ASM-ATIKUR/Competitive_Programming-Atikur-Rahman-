#include <stdio.h>

int main()
{
    int a, b, x, i=0, g=0, game =0, draw =0;

    do
    {
        scanf(" %d %d", &a, &b);

        game++;
        if(a==b)
        {
            draw++;
        }
        else if(a>b)
        {
            i++;
        }
        else
        {
            g++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf(" %d", &x);

        if(x==2)
        {
            break;
        }
    } while (x==1);

    printf("%d grenais\n", game);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", draw);

    if(i>g)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }

    return 0;
}
