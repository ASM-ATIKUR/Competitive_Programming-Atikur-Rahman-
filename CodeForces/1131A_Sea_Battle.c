#include <stdio.h>

int main(void)
{
    long long int w1, h1, w2, h2, total=0;
    scanf("%d %d %d %d", &w1, &h1, &w2, &h2);

    total= (2*(h1+h2+2))+(2*w1);

    printf("%d\n", total);

    return 0;
}
