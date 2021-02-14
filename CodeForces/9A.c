#include <stdio.h>

int main()
{
    int y, w, a;
    scanf(" %d %d", &y, &w);
    if(y>w)
    {
        a=6-y+1;
        if(a==6) printf("1/1\n");
        else if(a%3==0) printf("%d/2\n", a/3);
        else if(a%2==0) printf("%d/3\n", a/2);
        else printf("%d/6\n", a);
    }
    else
    {
        a=6-w+1;
        if(a==6) printf("1/1\n");
        else if(a%3==0) printf("%d/2\n", a/3);
        else if(a%2==0) printf("%d/3\n", a/2);
        else printf("%d/6\n", a);
    }

    return 0;
}
