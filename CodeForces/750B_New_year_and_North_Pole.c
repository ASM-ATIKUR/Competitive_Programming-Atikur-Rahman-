#include <stdio.h>
#include <string.h>

int main(void)
{
    int x=0, n, i, ans=1, dis;
    char str[10];
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %s", &dis, str);

        if(x==0 && ans)
        {
            if(strcmp(str, "South")!=0)
            {
                ans=0;
            }
        }
        else if(x==20000&& ans)
        {
            if(strcmp(str, "North")!=0)
            {
                ans=0;
            }
        }

        if(strcmp(str, "North")==0)
            x-=dis;
        else if(strcmp(str, "South")==0)
            x+=dis;

        if(x>20000 || x<0 )
            ans=0;
    }
    if(ans && x==0)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}
