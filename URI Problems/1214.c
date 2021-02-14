#include <stdio.h>

int main()
{
    int t, t2, i, sum=0, count=0;
    double avg;
    scanf("%d", &t);
    while(t-->0)
    {
        scanf("%d", &t2);
        int ara[t2];
        for(i=0; i<t2; i++)
        {
            scanf("%d", &ara[i]);
            sum+=ara[i];
        }
        avg=(double)sum/t2;
        for(i=0; i<t2; i++)
        {
            if(ara[i]>avg) count++;
        }
        printf("%.3lf%%\n", 100*(double)count/t2);
        sum=0;
        count=0;
    }
    return 0;
}
