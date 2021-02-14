#include <stdio.h>

int main()
{
    int num[5];
    int i, e=0, o=0, p=0, n=0;

    for(i=0; i<5; i++)
    {
        scanf(" %d", &num[i]);
    }

    for(i=0; i<5; i++)
    {
        if(num[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }

        if(num[i]>0)
        {
            p++;
        }
        else if(num[i]<0)
        {
            n++;
        }
    }

    printf("%d valor(es) par(es)\n", e);
    printf("%d valor(es) impar(es)\n", o);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);

    return 0;
}


