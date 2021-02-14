#include <stdio.h>

int main()
{
    int n, zcnt=0, zmax=0, flag=0, x, zm=0;
    scanf("%d", &n);
    int p=n;
    while(p--)
    {
        scanf("%d", &x);
        if(x==1)
        {
            if(zm>zmax) zmax=zm;
            zm=0;
        }
        else
        {
            zcnt++;
            zm++;
        }
    }
    if(zm>zmax) zmax=zm;

    if(n-zcnt==n) printf("%d\n", n-1);
    else printf("%d\n", n-zcnt+zmax);

    return 0;
}
