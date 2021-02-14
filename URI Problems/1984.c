#include <stdio.h>

int main()
{
    long long int n;
    int i;

    scanf(" %llu", &n);

    while (n>0)
    {
        printf("%d", n%10);
        n=n/10;
    }
    printf("\n");

    return 0;

}
