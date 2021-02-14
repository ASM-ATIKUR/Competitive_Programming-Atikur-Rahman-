#include <stdio.h>

int main()
{
    int a, b, c, d, y;
    scanf(" %d", &y);

    while(1)
    {
        y++;
        a=y%10;
        b=(y/10)%10;
        c=(y/100)%10;
        d=y/1000;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d\n", y);
            break;
        }

    }
    return 0;
}

