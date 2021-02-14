#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        int pn, pc;
        pn=a/c;
        if(a%c) pn++;
        pc=b/d;
        if(b%d) pc++;
        if(pn+pc<=k)
            printf("%d %d\n", pn, pc);
        else printf("-1\n");
    }
    return 0;
}
