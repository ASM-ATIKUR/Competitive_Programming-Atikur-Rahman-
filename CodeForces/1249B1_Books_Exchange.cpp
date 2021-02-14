#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, ara[100009], i, cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            scanf("%d", &ara[i]);
        }
        for(i=1; i<=n; i++)
        {
            cnt=1;
            int x=i;
            while(ara[x]!=i)
            {
                cnt++;
                x=ara[x];
            }
            printf("%d ", cnt);
        }
    }

    return 0;
}
