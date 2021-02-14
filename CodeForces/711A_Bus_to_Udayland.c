#include <stdio.h>
#include <string.h>

int main()
{
    int n, check=0, i, j;

    scanf("%d", &n);
    char bus[n][10];
    for(i=0; i<n; i++)
    {
        scanf("%s", bus[i]);
        if(check==0)
        {
            if(bus[i][0]=='O' && bus[i][1]=='O'){
                check=1;
                bus[i][0]=bus[i][1]='+';
            }
            else if(bus[i][3]=='O' && bus[i][4]=='O')
            {
                check=1;
                bus[i][3]=bus[i][4]='+';
            }
        }
    }
    if(check)
    {
        printf("YES\n");
        for(i=0; i<n; i++)
        {
            printf("%s\n", bus[i]);
        }
    }
    else printf("NO\n");

    return 0;

}
