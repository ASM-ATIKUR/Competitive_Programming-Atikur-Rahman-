#include <stdio.h>

int main()
{
    float a, b, c;
    scanf(" %f %f %f", &a, &b, &c);
    float perimeter, tarea;

    if(a+b<=c || a+c<=b || b+c<= a)
    {
        tarea = ((a+b)*c)/2;
        printf("Area = %.1f\n", tarea);
    }
    else
    {
        perimeter = a+b+c;
        printf("Perimetro = %.1f\n", perimeter);
    }

    return 0;
}
