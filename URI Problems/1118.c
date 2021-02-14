#include <stdio.h>

int main()
{
    float n, sum=0;
    int i=0, j;

    do{
        while(1)
        {
            scanf(" %f", &n);
            if(n>0.999 && n<10.001)
            {
                sum+=n;
                i++;
                if(i==2)
                {
                    break;
                }
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2f\n", sum/2.0);
        sum =0;
        i=0;
        while(1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf(" %d", &j);
            if(j==2 || j==1)
            {
                break;
            }
        }
        if(j==2)
        {
            break;
        }


    } while(j==1);


    return 0;
}

