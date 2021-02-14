#include <stdio.h>

int main()
{
    int d, m, y, Y, t, i, count;
    scanf(" %d", &t);
    i=t;
    while(i-->0)
    {
        scanf(" %d %d %d %d", &d, &m, &y, &Y);
        count =0;
        if(m==2 && d==29)
        {
            while(++y<=Y)
            {
                if(y%4==0 && y%100!=0 || y%400==0)
                {
                    count++;
                }
            }
            printf("Case %d: %d\n", t-i, count);
        }
        else
        {
            printf("Case %d: %d\n", t-i, Y-y);
        }
    }
    return 0;
}
