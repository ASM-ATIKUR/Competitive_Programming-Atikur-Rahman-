#include <stdio.h>

int main()
{
    int x=0, n, i;
    char a, b, c;

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %c %c %c", &a, &b, &c);

        if(a == 'X')
        {
            if(b== '+' && c== '+')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
        else
        {
            if(a == '+' && b == '+')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
    }

    printf("%d\n", x);

    return 0;
}
