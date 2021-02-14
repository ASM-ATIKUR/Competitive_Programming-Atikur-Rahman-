#include <stdio.h>

int main()
{
    int n, r, i, j, k, check=1, cnt=0;
    scanf("%d %d", &n, &r);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n;)
    {
        if(r<n) j=r;
        else j=n;
        while(j--)
        {
            if(ara[i]==0)
            {
                i++;
                if(j==0) check=0;
            }
            else
            {
                i+=(r-1);
                cnt++;
                break;
            }

        }
    }
    if(check) printf("%d\n", cnt);
    else printf("-1\n");

    return 0;
}
