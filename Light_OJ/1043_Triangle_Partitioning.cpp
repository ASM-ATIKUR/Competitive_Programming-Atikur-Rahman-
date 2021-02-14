#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs=1;
    double a, b, c, x, y, z, r, ar1, ar2, s, i, j, mid;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>r;
        s=(a+b+c)/2;
        ar1=sqrt(s*(s-a)*(s-b)*(s-c));
        i=0;
        j=a;
        while(j-i>1e-9)
        {
            mid=(i+j)/2;
            x=mid;
            y=b*(x/a);
            z=c*(x/a);
            s=(x+y+z)/2;
            ar2=sqrt(s*(s-x)*(s-y)*(s-z));
            if(abs(r-(ar2/(ar1-ar2)))<1e-7)
            {
                printf("Case %d: %.7f\n", cs++, x);
                break;
            }
            else if(r>(ar2/(ar1-ar2)))
                    i=mid;
            else j=mid;
        }
    }
    return 0;
}
