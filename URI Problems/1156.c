#include <stdio.h>

int main()
{
    double s=1;
    int i, j;

    for(i=2, j=3; j<=39; i=i*2, j=j+2)
    {
        s+=((double)j/(double)i);
    }
    printf("%.2lf\n", s);

    return 0;
}

