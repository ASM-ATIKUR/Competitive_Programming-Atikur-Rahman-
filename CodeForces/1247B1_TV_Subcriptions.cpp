#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n , k, d, ara[1000], i, j, ans;
    cin>>t;
    while(t--)
    {
        scanf("%d %d %d", &n, &k, &d);
        set<int>x;
        ans=INT_MAX;
        for(i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }
        int ck[1000];
        for(i=0; i<n-d+1; i++)
        {
            int y=0;
            memset(ck, 0, sizeof(ck));
            //printf("%d.......\n", d);
            for(j=0; j<d; j++)
            {
                if(ck[ara[j+i]]==0)
                {
                    ck[ara[j+i]]=1;
                    y++;
                }
                //printf("%d**%d....%d...\n", j,ck[ara[j]], ara[j]);
            }
            //printf("%d..\n", y);
            ans=min(y,ans);

        }
        printf("%d\n", ans);
    }

    return 0;
}


