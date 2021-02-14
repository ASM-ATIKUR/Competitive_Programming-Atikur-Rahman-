
#include<stdio.h>
#include<math.h>

int main()
{
    double A, B, C, T, R, TR, S, RT, pi=3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    T =0.5*A*C;
    R=pi*pow(C,2);
    TR=0.5*(A+B)*C;
    S=pow(B,2);
    RT =A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", T, R, TR, S, RT);

    return 0;


}
