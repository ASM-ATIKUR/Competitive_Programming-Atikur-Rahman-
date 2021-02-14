#include <stdio.h>

int main()
{
    int n, i, count = 0, a, b, c;

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d %d %d", &a, &b ,&c);

        if(a==1)
        {
            if(b==1 || c==1)
                count++;
        }
        else
        {
            if(b==1 && c==1)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}
