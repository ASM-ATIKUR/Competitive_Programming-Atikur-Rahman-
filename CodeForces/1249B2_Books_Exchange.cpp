#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, ara[100009],ck[100009], i, cnt;
    cin>>t;
    while(t--)
    {
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            scanf("%d", &ara[i]);
            ck[i]=-1;
        }
        for(i=1; i<=n; i++)
        {
            cnt=1;
            int x=i;
            if(ck[i]==-1)
            {
                ck[i]=i;
                while(ara[x]!=i)
                {
                    cnt++;
                    x=ara[x];
                    ck[x]=i;
                }
                ara[x]=i;
            }
            ara[i]=cnt;
        }
        for(i=1; i<=n; i++)
        {
            printf("%d ", ara[ck[i]]);
        }
    }

    return 0;
}
