#include<stdio.h>

int main()
{
    int p=0, m=1, pe=2, n, t, i, x, ara[15009];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &t);
        if(t==1)
        {
            ara[p]=i;
            p+=3;
        }
        else if(t==2)
        {
            ara[m]=i;
            m+=3;
        }
        else
        {
            ara[pe]=i;
            pe+=3;
        }
    }
    if(p==0 || m==1 || pe==2)
    {
        printf("0\n");
        return 0;
    }
    p/=3;
    m/=3;
    pe/=3;

    if(p<m)
    {
        if(p<pe) x=p;
        else x=pe;
    }
    else
    {
        if(m<pe) x=m;
        else x=pe;
    }
    printf("%d\n", x);
    for(i=0; i<x*3; i+=3)
    {
        printf("%d %d %d\n", ara[i], ara[i+1], ara[i+2]);
    }
    return 0;
}
