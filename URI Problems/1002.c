#include<stdio.h>
#include<math.h>

int main()
{
    double A, r= 3.14159, R;
    scanf("%lf", &R);

    A= r*pow(R,2);
    printf("A=%.4lf\n", A);

    return 0;

}
