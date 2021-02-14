#include <stdio.h>

int main(void)
{
    int h1, m1, h2, m2, h, m;

    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);


    if(h1==h2)
    {
        printf("%.2d:%.2d\n", h1, ((m1+m2)/2));
    }
    else
    {

        m=(60-m1+m2);
        h=(h2-h1-1);
        m=(m+(h*60))/2;

        h=(m/60);
        m%=60;
        if(m+m1>59)
        {
            h=h1+h+1;
            m=m+m1-60;
        }
        else
        {
            h=h1+h;
            m=m1+m;
        }

        printf("%.2d:%.2d\n", h, m);

    }

    return 0;
}
