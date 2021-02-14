#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101], ans[103];
    int x, y, hand=0, sum, i, j, startans=0, mns=0;

    while(scanf(" %[^,\n]s", a)!=EOF && scanf(" %s", b)!=EOF)
    {
        int al=strlen(a), bl=strlen(b)-1;
        a[al]='\0';
        b[bl+1]='\0';

        if(al==bl)
        {
            for(i=0; i<al; i++)
            {
                x= a[i]-'0';
                y= b[i+1]-'0';
                sum = hand+x+y;
                hand = sum/10;
                if(startans==0 && sum%10==0) mns++;
                else {
                    ans[i-mns] = (sum%10)+'0';
                    startans=1;

                }
            }
            if(hand>0)
            {
                ans[i-mns]=hand+'0';
                ans[i-mns+1]='\0';
            }
            else ans[i-mns]='\0';

            printf("%s\n", ans);
        }

        hand=0;
        startans=0;
        mns=0;
    }

    return 0;
}
