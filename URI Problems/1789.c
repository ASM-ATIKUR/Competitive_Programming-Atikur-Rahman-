#include <stdio.h>

int main()
{
    int n, x, i;


    while (scanf(" %d", &n)!= EOF)
    {
        int a=0;
        for(i=0; i<n; i++)
        {
            scanf(" %d", &x);

            if(x>a)
            {
                a=x;
            }
        }
        if(a<10)
        {
            printf("1\n");
        }
        else if(a>=10&&a<20)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;

}
