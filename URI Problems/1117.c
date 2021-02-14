#include <stdio.h>

int main()
{
    float n, sum=0;
    int i=0;

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
    return 0;
}
