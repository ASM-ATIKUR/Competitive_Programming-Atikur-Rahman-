#include <stdio.h>


int ara[1000009]={0};

int main()
{
    int i, j;

    for(i=1; i*i<=1000000; i++)
    {
        for(j=i+i; j<=1000000; j+=i)
        {
            ara[j]+=i;
        }
    }
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d\n", ara[n]);
    }

    return 0;
}
