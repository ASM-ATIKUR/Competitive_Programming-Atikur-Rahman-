#include <bits/stdc++.h>
using namespace std;

int main()
{
    double mp, ow, xx, dr, d[101], p;
    int n, x, l, i, ans;
    while(1)
    {
        scanf("%d %lf %lf %d", &l, &mp, &ow, &n);
        if(l<0) break;
        while(n--)
        {
            scanf("%d %lf", &x, &dr);
            for(i=x; i<101; i++)
                d[i]=dr;
        }
        ans=0;
        p=ow/l;
        i=1;
        xx= (ow+mp)-((ow+mp)*d[0]);
        while(xx<ow)
        {
            ans++;
            ow-=p;
            xx= xx-(xx*d[i++]);
        }
        printf("%d month", ans);
        if(ans!=1)
            cout<<'s';
        cout<<endl;

    }
    return 0;
}
