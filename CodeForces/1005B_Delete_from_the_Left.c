#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[200005], str2[200005];
    int count=0, l1, l2, i;

    gets(str1);
    gets(str2);

    l1=strlen(str1);
    l2=strlen(str2);

    for(i=0; i<l1 && i<l2; i++)
    {
        if(str1[l1-1-i]!=str2[l2-1-i])
        {
            count= 2*i;
            break;
        }
    }
    if(i==l1 || i==l2)
    {
        count=2*i;
    }
    printf("%d\n", l1+l2-count);


    return 0;
}
