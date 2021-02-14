#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2;
    scanf(" %f %f %f", &a, &b, &c);

    if(a==0|| pow(b,2)<a*c)
    {
        printf("Impossivel calcular\n");
    }

    else{
        r1 = (-b+sqrt(pow(b, 2)-(4*a*c)))/(2*a);
        r2 = (-b-sqrt(pow(b, 2)-(4*a*c)))/(2*a);

        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }

    return 0;
}
