#include <stdio.h>

int main()
{
    unsigned int a, b, carry, sum, count;
    while(1)
    {
        scanf("%u %u", &a, &b);
        if(a==0 && b==0) break;

        count=0;
        carry=0;
        sum=0;
        while(a>0 && b>0)
        {
            sum=(a%10)+(b%10)+carry;
            carry=sum/10;
            if(carry==1) count ++;
            a=a/10;
            b=b/10;
        }
        if((a%10)+(b%10)+carry>9) count++;
        if(count==0) printf("No carry operation.\n");
        else if(count==1) printf("%u carry operation.\n", count);
        else printf("%u carry operations.\n", count);
    }
    return 0;
}
