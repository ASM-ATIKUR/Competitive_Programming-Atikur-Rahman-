#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n ,t, i, mod=0, hand=0, dig;
    char num[110];
    scanf(" %d %d", &n, &t);
    num[0]='1';
    for(i=1; i<n; i++)
    {
        num[i]='0';
    }
    num[n]='\0';
    for(i=0; i<n; i++)
    {
        mod=((mod*10)+num[i]-'0')%t;
    }

    if(mod>0) mod=t-mod;
    for(i=n-1; mod>0; i--)
    {
        dig=mod%10;
        mod=mod/10;
        if((num[i]-'0'+dig+hand)>9)
        {

            dig=(num[i]-'0'+dig+hand)%10;
            num[i]=dig+'0';
            hand=1;
        }
        else {
            num[i]=num[i]+dig+hand;
            hand=0;
        }
    }
    if(hand)
    {
        for(i=n-1; i>=0; i--)
        {
            num[i+1]=num[i];
        }
        num[n+1]='\0';
        num[0]=hand+'0';
    }

    if(strlen(num)> n) printf("-1\n");
    else puts(num);
    return 0;
}
