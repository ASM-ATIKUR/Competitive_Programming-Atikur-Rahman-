#include <stdio.h>

int main()
{
    int a, b;
    scanf(" %d %d", &a, &b);
    if(a<=b)
    {
        if(a%2==0) printf("Malvika\n");
        else printf("Akshat\n");
    }
    else
    {
        if(b%2==0) printf("Malvika\n");
        else printf("Akshat\n");
    }
    return 0;
}
