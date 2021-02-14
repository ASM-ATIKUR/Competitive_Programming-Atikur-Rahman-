#include <stdio.h>

int main()
{
    float a, b, c, d, e, avg;

    scanf(" %f %f %f %f", &a, &b, &c, &d);
    avg = ((a*2)+(b*3)+(c*4)+(d*1))/(1+2+3+4);
    printf("Media: %.1f\n", avg);

    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        scanf(" %f", &e);

        printf("Aluno em exame.\n");

        printf("Nota do exame: %.1f\n", e);

        avg = (avg+e)/2;
        if(avg>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", avg);
        }
        else if(avg<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", avg);
        }
    }
    return 0;
}
