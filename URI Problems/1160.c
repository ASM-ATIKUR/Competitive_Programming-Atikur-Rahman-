#include <stdio.h>

int main()
{
    int pa, pb, n, i, count = 0;
    double ga, gb;
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d %d %lf %lf", &pa, &pb, &ga, &gb);
        count=0;
        while(pa<=pb)
        {
            count++;
            pa+= (int)pa*ga/100;
            pb+= (int)pb*gb/100;
            if(count>100)
            {
                break;
            }
        }

        if(count<=100)
        {
            printf("%d anos.\n", count);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }

    }

    return 0;
}
