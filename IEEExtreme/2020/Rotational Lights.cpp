#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    scanf("%d %d", &n,&t);
    int ara[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    if(n==1)
    {
        printf("%d\n", t-1);
        return 0;
    }

    int dis=ara[1]-ara[0],f1=1,f2=1;
    for(int i=2; i<n; i++)
    {
        if(dis!=ara[i]-ara[i-1])
        {
            f1=0;
            break;
        }
    }
    if(dis!=t-ara[n-1]+ara[0]) f1=0;
    if(f1)
    {
        printf("%d\n", dis-1);
        return 0;
    }
    for(int i=0; i<n/2; i++)
    {
        if(ara[i]+t/2 != ara[i+n/2])
        {
            f2=0;
            break;
        }
    }
    if(f2 && (t%2))
    {
        printf("%d\n", t/2-1);
    }
    else printf("%d\n", t-1);


    return 0;
}
