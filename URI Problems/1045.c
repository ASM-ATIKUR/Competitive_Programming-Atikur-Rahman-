#include <stdio.h>
#include <math.h>

int main()
{
    double num[3];
    scanf(" %lf %lf %lf", &num[0], &num[1], &num[2]);

    double max, temp;

    int i, j, l;


    for(i=0; i<3; i++)
    {
        max =0.00;
        for(j=i; j<3; j++)
        {
            if(num[j]>max)
            {
                max = num[j];
                l = j;
            }
        }
        temp = num[i];
        num[i] = max;
        num[l]= temp;
    }

    double a= num[0], b= num[1], c = num[2];

    if(a>= b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(pow(a, 2)==(pow(b, 2)+pow(c, 2)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(pow(a, 2)>(pow(b, 2)+pow(c, 2)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(pow(a, 2)<(pow(b, 2)+pow(c, 2)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }


    if(a==b&& b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b && a!=c) || (b==c&&b!=a) || (a==c&&a!=b))
    {
        printf("TRIANGULO ISOSCELES\n");
    }



    return 0;
}
