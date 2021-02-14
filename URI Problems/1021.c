#include<stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);

    int solid = (int)n, fraction;
    float fraction_temp;
    fraction_temp = (n - (int)n)*100;


    int note[6]= {100, 50, 20, 10, 5, 2};
    int coin[6]= {100, 50, 25, 10, 5, 1};
    int number[15];


    int i, j;
    for(j=0; j<6; j++)
    {
        number[j]= solid/ note[j];
        solid=solid%note[j];
    }
    fraction = (int)fraction_temp + (solid*100);
    for(i=0; i<6; i++, j++)
    {
        number[j]= fraction/coin[i];
        fraction= fraction%coin[i];
    }

    printf("NOTAS:\n");
    for(j=0; j<6; j++)
    {
        printf("%d nota(s) de R$ %d.00\n", number[j], note[j]);
    }

    printf("MOEDAS:\n");
    for(i=0; i<6; i++,j++)
    {
        float x= (float)coin[i]/100;
        printf("%d moeda(s) de R$ %.2f\n", number[j], x);
    }


    return 0;
}
