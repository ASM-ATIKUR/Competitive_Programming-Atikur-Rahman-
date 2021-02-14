#include <stdio.h>
#include<string.h>

int main()
{
    int flag[10]={0}, fl=1, c, r, i, j, cnt=0, x;
    char str[12][12];

    scanf("%d %d", &r, &c);
    x=r;
    for(i=0; i<r; i++)
    {
        scanf("%s", str[i]);
        fl=1;
        for(j=0; j<c; j++)
        {
            if(str[i][j]=='S')
            {
                fl=0;
                flag[j]= 1;
            }
        }
        if(fl)
        {
            x--;
            cnt+=c;
        }
    }
    for(i=0; i<c; i++)
    {
        if(flag[i]==0) cnt+=x;
    }
    printf("%d\n", cnt);

    return 0;

}
