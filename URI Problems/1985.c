#include <stdio.h>

int main()
{
    int n, x, y, i;
    float sum =0.00;

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d %d", &x, &y);

        switch(x-1000)
        {
            case 1 : sum+= (y*1.50);
            break;

            case 2 : sum+= (y*2.50);
            break;

            case 3 : sum+= (y*3.50);
            break;

            case 4 : sum+= (y*4.50);
            break;

            case 5 : sum+= (y*5.50);
            break;
        }
    }
    printf("%.2f\n", sum);

    return 0;
}
