#include<stdio.h>

int main()
{
    int x;
    double y, z;
    scanf("%d %lf", &x, &y);
    z= x/y;


    printf("%.3lf km/l", z);

    return 0;
}
