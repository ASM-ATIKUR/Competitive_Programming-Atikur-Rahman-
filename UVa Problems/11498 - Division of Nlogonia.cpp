#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, x, y;
    while(true)
    {
        cin>>t;
        if(t==0)
            break;
        scanf("%d %d", &n, &m);
        while(t--)
        {
            scanf("%d %d", &x, &y);

            if(x==n || y==m)
                printf("divisa\n");
            else if(x>n && y>m)
                printf("NE\n");
            else if(x<n && y<m)
                printf("SO\n");
            else if(x<n && y>m)
                printf("NO\n");
            else printf("SE\n");
        }
    }
}
