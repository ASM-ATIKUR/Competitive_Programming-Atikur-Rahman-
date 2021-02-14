#include <stdio.h>

int main()
{
    int num[10000];
    int i, n;
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d", &num[i]);
    }

    for(i=0; i<n; i++)
    {
        if(num[i]==0)
        {
            printf("NULL\n");
        }
        else if(num[i]%2==0)
        {
            if(num[i]>0)
            {
                printf("EVEN POSITIVE\N");
            }
            else
            {
                printf("EVEN NEGATIVE\n");
            }
        }
        else
        {
            if(num[i]>0)
            {
                printf("ODD POSITIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }

    }


    return 0;
}


