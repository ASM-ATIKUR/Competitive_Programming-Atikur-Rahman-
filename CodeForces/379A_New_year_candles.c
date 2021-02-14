#include <stdio.h>

int main()
{
    int a, b, i=0;
    scanf(" %d %d", &a, &b);
    i=a;
    while(a>=b)
    {
        i+=a/b;
        a=(a/b)+(a%b);
    }
    printf("%d\n", i);
    return 0;
}
