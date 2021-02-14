#include <stdio.h>

int main()
{
    int ts, te, t;

    scanf(" %d %d", &ts, &te);

    if(ts>te)
    {
        t = (te-ts)+24;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    else if(ts==te)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24);
    }

    else
    {
        t = te-ts;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }

    return 0;
}
