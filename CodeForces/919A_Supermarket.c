#include <stdio.h>

int main()
{
    int n, m, a, b;
    float prz, minpz;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        prz=(double)m*((double)a/b);
        if(i==0)minpz=prz;
        if(prz<minpz) minpz=prz;
    }
    printf("%f\n", minpz);

    return 0;
}
