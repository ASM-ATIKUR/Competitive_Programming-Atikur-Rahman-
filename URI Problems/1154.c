#include<stdio.h>

int main()
{
    int n, sum =0, count=0;

    while(1)
    {
        scanf(" %d", &n);
        if(n<0)
        {
            break;
        }
        else
        {
            sum+=n;
            count++;
        }
    }
    printf("%.2lf\n", (double)sum/(double)count);

    return 0;
}
