#include <stdio.h>

int main()
{
    int n, m, i=0, count=0, x;
    scanf(" %d %d", &n, &m);
    while(n)
    {
        i=i+1;
        if(i%m==0) n++;
        count++;
        n--;
    }
    printf("%d\n", count);

    return 0;
}
