#include<stdio.h>

int main()
{
    char e;
    double s, sd, b;
    scanf("%s %lf %lf", &e, &s, &sd);
    b= s+((sd*15)/100);
    printf("TOTAL = R$ %.2lf", b);

    return 0;
}
