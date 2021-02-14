#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while(true)
    {
        scanf("%d %d", &n,&m);
        int x, cnt=0, ara[n], arr[m], j=0;
        if(!n && !m)
            break;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }
        for(int i=0; i<m; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(ara, ara+n);
        sort(arr, arr+m);
        for(int i=0; i<m; i++)
        {
            if(ara[j]<=arr[i])
            {
                cnt+=arr[i];
                j++;
                if(j==n)
                    break;
            }
        }
        if(j==n)
            printf("%d\n", cnt);
        else printf("Loowater is doomed!\n");
    }
    return 0;
}
