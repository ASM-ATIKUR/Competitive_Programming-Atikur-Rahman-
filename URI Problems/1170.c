#include <stdio.h>

int main()
{
    int n, i, j;
    float f;


    scanf(" %d", &n);
    for(i=0; i<n; i++)
    {
        scanf(" %f", &f);
        int count=0;
        while(f>1)
        {
            count++;
            f/=2;
        }
        printf("%d dias\n", count);

    }

    return 0;
}
