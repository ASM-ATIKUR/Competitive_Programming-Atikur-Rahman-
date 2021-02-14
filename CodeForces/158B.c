#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, c4 =0, c3 = 0, c2 = 0, c1 =0, tcount = 0, i, a=0, b=0;
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d", &x);

        switch(x)
        {
            case 1 : c1++;
            break;

            case 2 : c2++;
            break;

            case 3 : c3++;
            break;

            case 4 : c4++;
            break;
        }
    }

    tcount=c4+c3+(c2/2);
    c2 = c2%2;

    if(c1>c3)
        c1=c1-c3;
    else
        c1=0;

    if(c1>0)
        c1=c1-(c2*2);


    if(c1>4)
    {
        a=c1%4;
        b=c1/4;

    }
    else
    {
        a=c1;
    }

    if(a>0)
    {
        tcount++;
    }

    tcount+= c2+b;


    printf("%d\n", tcount);

    return 0;

}
