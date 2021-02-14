#include <stdio.h>

int main()
{
    int ara[100], i, max =0, count =1;

    for(i=0; i<100; i++)
    {
        scanf("%d", &ara[i]);

        if(ara[i]>max)
        {
            max = ara[i];
            count=i+1;
        }
    }
    printf("%d\n%d\n", max, count);
    return 0;
}
