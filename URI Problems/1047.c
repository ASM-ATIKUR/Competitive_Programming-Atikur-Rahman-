#include <stdio.h>

int main()
{
    int tsh, tsm, tem, teh, t1, t2, tl, dh, dm;

    scanf(" %d %d %d %d", &tsh, &tsm, &teh, &tem);

    t1= (tsh*60)+tsm;
    t2= (teh*60)+tem;

    if(t1>t2)
    {
        tl = (t2-t1)+(24*60);
        dh= tl/60;
        dm= tl%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
    }
    else if(t1==t2)
    {
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", 24);

    }

    else
    {
        tl = (t2-t1);
        dh= tl/60;
        dm= tl%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
    }

    return 0;
}

