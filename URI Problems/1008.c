#include<stdio.h>

int main()
{
    int n, h;
    double sp, s;
    scanf("%d %d %lf", &n, &h, &sp);
    s = h*sp;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", s);

    return 0;


}
