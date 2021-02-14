#include <stdio.h>

int main()
{
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);

    if(a>b)
    {
        if(b>c){
            printf("%d\n%d\n%d\n", c, b, a);
        }
        else if(c>b)
        {
            if(a>c)
            {
                printf("%d\n%d\n%d\n", b, c, a);
            }
            else{
                printf("%d\n%d\n%d\n", b, a, c);
            }
        }
    }
    else if(a<b)
    {
        if(c>b)
        {
            printf("%d\n%d\n%d\n", a, b, c);
        }
        else if(b>c)
        {
            if(a>c)
            {
                printf("%d\n%d\n%d\n", c, a, b);
            }
            else
            {
                printf("%d\n%d\n%d\n", a, c, b);
            }
        }
    }

    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;

}
