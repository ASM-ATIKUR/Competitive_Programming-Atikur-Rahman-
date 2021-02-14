#include <stdio.h>
int a[200009], b[200009], flag[200005]={0};
int main()
{
    int j=0, n, i, cnt=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<n; i++)
    {
        if(flag[b[i]]==0)
        {
            cnt=0;
            for(; j<n; j++)
            {
                if(a[j]==b[i])
                {
                    printf("%d ", ++cnt);
                    j++;
                    break;
                }
                else
                {
                    flag[a[j]]=1;
                    cnt++;
                }
            }
        }
        else printf("0 ");
    }

    return 0;
}
