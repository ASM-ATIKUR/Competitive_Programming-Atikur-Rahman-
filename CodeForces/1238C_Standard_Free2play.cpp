#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, h, n, ara[200009], i, cnt;
    cin>>q;
    while(q--)
    {
        scanf("%d %d", &h, &n);
        cnt=0;
        for(i=0; i<n; i++)
            scanf("%d", &ara[i]);

        for(i=1; i<n; i++)
        {
            if(i<n-1)
            {
                if(ara[i]-1==ara[i+1])
                {
                    i++;
                }
                else cnt++;

            }
            else
            {
                if(ara[i]-1>0)
                    cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
