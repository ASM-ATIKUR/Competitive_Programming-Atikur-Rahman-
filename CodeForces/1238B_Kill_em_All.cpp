#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, r, ara[100009], i, j, cnt, x;
    cin>>t;
    while(t--)
    {
        scanf("%d %d", &n, &r);
        cnt=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }
        sort(ara, ara+n);
        int pre=1000000;
        for(i=n-1; i>=0; i--)
        {
            if(cnt*r>=ara[i]) break;
            if(ara[i]!=pre)
            {
                pre=ara[i];
                cnt++;
            }
        }
        printf("%d\n", cnt);

    }
    return 0;
}
