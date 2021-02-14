#include <stdio.h>
#include <string.h>

int main()
{
    int ara[30]={0}, i, count=0;
    char ch;
    scanf("%*c");
    while(1)
    {
        scanf(" %c", &ch);
        if(ch=='}') break;

        if(ch>='a' && ch<='z')
        {
            ara[ch-'a']=1;
        }
    }
    for(i=0; i<30; i++)
    {
        if(ara[i]) count++;
    }
    printf("%d\n", count);
    return 0;
}
