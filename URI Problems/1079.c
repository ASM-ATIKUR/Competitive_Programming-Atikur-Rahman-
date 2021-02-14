#include <stdio.h>

int main()
{
    int n, i;
    float a, b, c, avg;
    float ara[10000];
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %f %f %f", &a, &b, &c);
        avg = ((a*2.00)+(b*3.00)+(c*5.00))/10.0;
        ara[i] = avg;
    }
    for(i=0; i<n; i++)
    {
        printf("%.1f\n", ara[i]);
    }
    return 0;
}
