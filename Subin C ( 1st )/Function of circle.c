#include<stdio.h>



double area_circle(double n, int r)
{

    n= r*r;
    return n;
}
int main()
{
    int r, area;
    double n;
    printf("Enter the value of r: ");
    scanf("%d", &r);

    area = area_circle(n,r);
    printf("The area is %d", area);

    return 0;
}
