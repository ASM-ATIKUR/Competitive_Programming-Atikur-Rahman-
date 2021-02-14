#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, n, ara[1000], i, cnt, pre;
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }
        sort(ara, ara+n);
        pre=ara[0];
        cnt=0;
        for(i=1; i<n; i++)
        {
            if(pre+1==ara[i]) cnt++;
            pre=ara[i];
        }
        if(cnt>0) printf("2\n");
        else printf("1\n");
    }

    return 0;
}
